#include<stdio.h>
void print(char b[]);
main()
{
    int i;
    char c[]="aeiou";//"aeiou"

    char *arr[5];

    void (*fp)(char []);
    fp=print;
    fp(c);

    for(i=0;i<5;i++)//Assigning each element address to each pointer in array i.e., arr[]
    {
        arr[i]=&c[i];
    }
    printf("The addresses of each pointer in array pointer are \n");
     for(i=0;i<5;i++)///////printing addresses
    {
        printf(" address of a[%d] is %p \n",i,(arr[i]));
    }
    printf("The characters in array pointer are \n");
    for(i=0;i<5;i++)////////printing values
    {
        printf("%c ",*(arr[i]));
    }


}

    void print(char b[])
    {
        int i ;
        char *arr[5];
        char (*ptr)[5]=b;

        for(i=0;i<5;i++)
        {
            arr[i]=b+i;
        }
        printf("using array of pointer \n\n");
        for(i=0;i<5;i++)
        {
            printf("%c ",*(arr[i]));
        }
        printf("\nusing array pointer \n\n");
         for(i=0;i<5;i++)
        {
            printf("%c ",(*arr)[i]);
        }
        printf("\n\n");
    }



