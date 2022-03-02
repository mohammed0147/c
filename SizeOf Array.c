#include<stdio.h>
void fun(int b[]);
main()
{
    int a[]={1,2,3};
    fun(a);
}
void fun(int b[])
{
    int sum =0,i;

    printf("The values in array are \n");
    for(i=0;i<3;i++)
    {
        printf("%d ",*(b+i));
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        sum = sum + *(b+i);
    }
    printf("size of b i.e., pointer is %d \n",sizeof(b));
    printf("Sum of the array elements is %d",sum);
}

