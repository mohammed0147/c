#include<stdio.h>
main()
{
    int a=10,b=20;
    printf("Before swapping a and b values are %d and %d \n",a,b);
    //swap(&a,&b);
    swap2(&a,&b);
    printf("Ater swapping swapping a and b values are %d and %d \n",a,b);

}
swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

swap2(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
