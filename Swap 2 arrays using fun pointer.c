
#include<stdio.h>
#define N 5
void swap(int *x,int *y);
main()
{
    int arr1[N],arr2[N],i,temp;
    int *p1=arr1,*p2=arr2;
    int size=sizeof(arr1)/sizeof(int);
    //size=5

    void (*fp)(int *,int *)=&swap;


    printf("Enter 5 values of array 1  \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",p1+i);
    }
    printf("Enter 5 values of array 2 \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",p2+i);
    }

    for(i=0;i<size;i++)
    {
        fp((p1+i),(p2+i));
      /*  temp=*(p1+i);
        *(p1+i)=*(p2+i);
        *(p2+i)=temp;*/
    }
    printf("Array 1 values after swapping are\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(p1+i));
    }
    printf("\nArray 2 values after swapping are\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(p2+i));
    }
}

void swap(int *x,int *y)
{
    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
}
