
#include <stdio.h>
main()
{
    int a[]={2,4,18,28,50,36},i,j,temp;

    for(i=0;i<sizeof(a)/sizeof(int);i++)
    {
        for(j=i+1;j<sizeof(a)/sizeof(int);j++)
        {
        if(a[j]>a[i])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }

        printf("Second largest number is %d\n",a[1]);

}
