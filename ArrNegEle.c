
#include <stdio.h>
main()
{
    int arr[]= { -1, 0,2,-3,4,-5,-10,8},i;

    for(i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        if(arr[i]<0)
        {
            printf("%d is negative number and it's position in array is %d\n",arr[i],i);
           // printf("%d\n",&arr[i]);

        }

    }

}
