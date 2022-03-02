#include<stdio.h>
main()
{
    int *p1,*p2;
    p1=(int *)malloc(1);
    p2=(int *)malloc(1);

    *p1=10;
    *p2=20;

    printf("Before swapping a and b values are %d and %d \n",*p1,*p2);
    //swap(&a,&b);
    swap(p1,p2);
    printf("Ater swapping swapping a and b values are %d and %d \n",*p1,*p2);

}
swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
