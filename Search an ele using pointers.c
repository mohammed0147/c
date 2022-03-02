#include<stdio.h>
#define N 5
main()
{
    int arr[N],i,num,count=0;
    int *p1=arr;
    //int size=sizeof(arr)/sizeof(int);


    printf("Enter 5 array values \n");
    for(i=0;i<N;i++)//////////////Input
    {
        scanf("%d",p1+i);
    }
    printf("Enter the number to be search in array values \n");
    scanf("%d",&num);

    for(i=0;i<N;i++)//////////Logic
    {
        if(*(p1+i)==num)
        {
            count++;
            printf("The given number %d is present in array \n",num);
        }
    }
    if(count==0)
    {
        printf("The given number %d is not present in array \n",num);
    }
}
