
#include<stdio.h>
main()
{
    int arr[5],i,j,temp;
    int *p1=arr;
    int size=sizeof(arr)/sizeof(int);
    int *p2=&arr[size-1];
    //printf("%d",*p2);

    printf("Enter array values \n");//Input
    for(i=0;i<size;i++)
    {
        scanf("%d",p1+i);
    }

    for(i=0,j=5;i<3;i++)//Logic
    {
        temp=*(p1+i);
        *(p1+i)=*(p2);
        *(p2)=temp;
        p2--;
    }
      printf("Array values after reversing are\n");
    for(i=0;i<size;i++)//////////////////////////////////printing
    {
        printf("%d ",arr[i]);
    }
}
