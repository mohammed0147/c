#include<stdio.h>
int main()
{
    int a[2][2]={{1,2},{3,4}},i,j;
    int b[2][3];
    int (*p)[2]=a;
    int (*ptr)[3]=b;
    printf("Arra a values are \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",*(*(p+i)+j));
        }
        printf("\n");
    }
    printf("Enter Array b values \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",(*(ptr+i)+j));
            //printf("%d ",*(*(ptr+i)+j));
        }
    }
     printf("Array b values are  \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
    }
}

