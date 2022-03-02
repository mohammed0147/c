#include <stdio.h>
#define PRINT(temp) printf("The largest numbr is %d",temp);
main()
{
    int arr[5]={3,4,1,5,7};
    int i,j,temp=0;
    for(i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        for(j=i;j<5;j++)
        {
           // if(arr[j]>temp)
            //{

             //   temp=arr[j];
           // }
          // COMP(arr[j],temp)

        }

    }

    PRINT(temp);
           // printf("%d",temp);



}
