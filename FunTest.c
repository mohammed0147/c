#include <stdio.h>
void ref(int *p1,int *p2);
main()
{
    int a=10,b=20;
    printf("Before swapping a=%d and b=%d \n",a,b);
    ref(&a,&b);
    printf("After swapping a= %d b= %d ",a,b);
}
void ref(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;

}

