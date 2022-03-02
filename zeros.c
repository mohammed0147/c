#include <stdio.h>

int main()
{
 int arr[]={0,0,0,1,1,1,0};
 int count=0, count1=0;
 int i, n=sizeof (arr)/sizeof (arr[0]);
 for(i=0;i<n;i++)
 {
         if(arr[i]==0)
         {
            count++;
             printf("%dits pos is %d\n",arr[i],i);
          }
          else
        {
          count1++;
          printf("%d its pos is %d\n ",arr[i],i);
    }

}
printf("No. of zeros are %d \n",count);
printf("No. of zeros are %d ",count1);

}
