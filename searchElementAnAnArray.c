
#include <stdio.h>
main()
{
    int a[]={1,2,3,4,5,6},i,n,count=0;
    printf("Enter the number to be search ");
    scanf("%d",&n);

    for(i=0;i<sizeof(a)/sizeof(int);i++)
    {
        if(a[i]==n)
        {
            count++;
            printf("%d is Present in Array",a[i]);
        }
    }

    if(count==0)
    {
        printf(" %d is not present",n);
    }


}
