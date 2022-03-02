#include <stdio.h>
main()
{
    int b[5]={10,20,30,40,50},i;
    int *p[5];

    for(i=0;i<5;i++)
    {
        printf("&b[i]  = %p ",&b[i]);
        p[i]=&b[i];
        printf("p[i]  = %p \n",p[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("value is %d " ,b[i]);
        printf(" Dereferencing using index %d " ,*p[i]);
        printf(" Dereferencing using pointer arithmetic %d \n" ,**(p+i));
        printf(" Addresses of p are %p  \n",p+i);
        printf("  size of p[i]  is %d \n",sizeof(p[i]));

    }

        printf("  size of p  is %d \n",sizeof(p));




}
