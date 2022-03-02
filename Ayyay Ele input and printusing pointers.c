#include<stdio.h>
main()
{
    int arr[5],a[5],i;
    int *p1=arr,*p2=a;
    int size=sizeof(arr)/sizeof(int);

    printf("Enter 5 array values \n");
    for(i=0;i<size;i++)//////////////Input
    {
        scanf("%d",p1+i);
    }

    for(i=0;i<size;i++)//////////Logic
    {
        *(p2+i)=*(p1+i);
    }
    printf("Array values after copying are\n");
    for(i=0;i<size;i++)///////////////////////Printing
    {
        printf("%d ",*(p2+i));
    }
}
