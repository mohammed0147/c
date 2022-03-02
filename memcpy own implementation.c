#include <stdio.h>
#include <string.h>
void * Memcpy(void* dst, const void* src, unsigned int cnt)
{
    char *pszDest = (char *)dst;
    const char *pszSource =( const char*)src;
    if((pszDest!= NULL) && (pszSource!= NULL))
    {
        while(cnt) //till cnt
        {
            //Copy byte by byte
            *(pszDest++)= *(pszSource++);
            --cnt;
        }
    }
    return dst;
}
int main()
{
    char src[20] = "How Are you ?"; //Source String
    char dst[20] = {0}; //dst buffer
    //copy source buffer int dst
    Memcpy(dst,src,sizeof(src));
    printf("dst = %s\n", dst);
    return 0;
}
