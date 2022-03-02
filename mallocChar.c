#include <stdio.h>
#include <stdlib.h>
main()
{
    int a=10,i;
    char *pm=(char *)malloc(5*(sizeof(char)));
    printf("Enter characters");
    for(i=0;i<5;i++)
    {
        scanf("%c",pm+i);
    }
    printf("The stored values");
    for(i=0;i<5;i++)
    {
        printf("%c ",*(pm++));
    }
    free(pm);
    pm=NULL;
}

