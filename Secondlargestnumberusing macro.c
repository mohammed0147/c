
#include <stdio.h>
main()
{
    int a[]={2,4,18,-1,50,36},n;
    n=sizeof(a)/sizeof(int);

    //int r =lar(a,n);
   // printf("Result in main also same as definition %d",r);
    min(a,n);

}

int lar(int b[],int m)
{
    int i,j,temp;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)//sizeof(b)/sizeof(int)
        {
        if((*(b+j))>(*(b+i)))
        {
            temp=*(b+i);
            *(b+i)=*(b+j);
            *(b+j)=temp;
        }
        }
    }

        printf("Largest number is %d\n",*(b));
        return *b;
}

min(int b[],int m)
{
    int i,j,temp;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)//sizeof(b)/sizeof(int)
        {
        if((*(b+j))>(*(b+i)))
        {
            temp=*(b+i);
            *(b+i)=*(b+j);
            *(b+j)=temp;
        }
        }
    }

        printf("Smallest number is %d\n",*(b+(m-1)));

}
