#include<stdio.h>
main()
{
    int i;
    char str1[]="Hi";
    char str2[]="Hello";
    char *p1=str1;
    char *p2=str2;
   // void (*fp)(char *,char *);
    //fp=cmp;
    for(i=0;*(p1+i)!='\0';i++)
    {
        printf("%c",*(p1+i));
    }
}
