#include <stdio.h>
main()
{
    int a=10,i;
    //int *pi=&a;
    int *pm=(int *)malloc(5*(sizeof(int)));

    //printf("%d \n",*pi);

    for(i=0;i<5;i++)
    {
        scanf("%d",pm+i);
    }
    for(i=0;i<5;i++)
    {
        printf("%d    ",*(pm+i));
    }
}
