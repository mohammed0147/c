#include <stdio.h>
main()
{
    int a[]={1,2,3,4,5};
    int b[5]={1,2,3,4,5};
    int c[10]={1,2,3,4,5};
    int d[5],i,j;
    int e[5];
    e[0]=1;
    e[1]=2;
    e[2]=3;
    e[3]=4;
    e[4]=5;
    printf("Values of Array a\n");
    for(j=0;j<5;j++)
    {
        printf("%d",a[j]);
    }
    printf("\nValues of Array b\n");
    for(j=0;j<5;j++)
    {
        printf("%d",b[j]);
    }
    printf("\nValues of Array c\n");
    for(j=0;j<5;j++)
    {
        printf("%d",c[j]);
    }
    //printf("\nEnter d array values\n");
   /* for(i=0;i<5;i++)
    {
        scanf("%d",&d[i]);
    }
    printf("\nValues of Array d\n");
    for(j=0;j<5;j++)
    {
        printf("%d",d[j]);
    }
    */
    printf("\nValues of Array e");
    for(j=0;j<5;j++)
    {
        printf("%d",e[j]);
    }

    printf("\nAddresses of Array e\n");
    for(j=0;j<5;j++)
    {
        printf("%p\n",&e[j]);
    }

}
