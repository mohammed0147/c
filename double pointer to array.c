#include<stdio.h>
main()
{
    int arr[]={1,2,3,4},i;
    int *ptr=arr;
    int **dp=&ptr;
    for(i=0;i<4;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
     for(i=0;i<4;i++)
    {
        printf(" dp is %d ",);
    }
     printf("\n");
     for(i=0;i<4;i++)
    {
        printf("%d ",*(*(dp+i)));
    }
}
