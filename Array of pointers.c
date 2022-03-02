#include<stdio.h>
main()
{
    int i;
    char c[]={'a','e','i','o','u'};

    char *arr[5];

    for(i=0;i<5;i++)//Assigning each element address to each pointer in array i.e., arr[]
    {
        arr[i]=&c[i];
    }
    printf("The addresses of each pointer in array pointer are \n");
     for(i=0;i<5;i++)///////printing addresses
    {
        printf(" address of a[%d] is %p \n",i,(arr[i]));
    }
    printf("The characters in array pointer are ");
    for(i=0;i<5;i++)////////printing values
    {
        printf("%c ",*(arr[i]));
    }

}
