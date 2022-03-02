#include<stdio.h>
main()
{
    int i;
    char c[]={'a','e','i','o','u'};

    char (*arr)[5];

    arr=c;


    printf("The characters in array  are ");
    for(i=0;i<5;i++)////////printing values
    {
        printf("%c ",(*arr)[i]);
    }

}
