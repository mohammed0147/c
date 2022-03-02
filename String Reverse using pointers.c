#include <stdio.h>

int main()
{
    char str[20] = "inaylaK olleH";
   // printf("Enter string ");
     // scanf("%s",str);
    char *ptr=str,temp;
    char i,len=0;
    while(*ptr!='\0')
    {
        len++;
        ptr++;
    }
    //printf("%d\n",len);
    ptr=str;
    char *ptr2=&str[len-1];
    /*
    for(i=0;*(ptr+i)!='\0';i++)
    {
        printf("%c",*(ptr+i));
    }*/

    while(ptr2>ptr)
    {
        temp=*ptr;
        *ptr=*ptr2;
        *ptr2=temp;
       // printf("%c",*(ptr));
        ptr++;
        ptr2--;
    }
    printf("%s\n",str);


    return 0;
}



