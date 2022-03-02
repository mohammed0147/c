#include <stdio.h>
#define ROWS 2
#define COLS 3
main()
{
    //int a[ROWS][COLS]={{10,20,30},{40,50,60}},i,j;
    int a[ROWS][COLS],i,j,count=0,count2=0;
    printf("Enter Array values");
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            printf("%d -> it's address is %p   ",a[i][j],&a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            if(a[i][j]%2==0)
            {
                count++;
                printf("%d is Even and it's position is array is row %d and column %d  \n ",a[i][j],i,j);
            }

            else
            {
                count2++;
                printf("%d is Odd and it's position is array is row %d and column %d  \n ",a[i][j],i,j);
            }

        }
        printf("\n");
    }


}

