#include <stdio.h>
#define DEF printf("Enter valid choice")
#define CASE printf("case 2")
main()
{
    int choice =2,a=1,b=20,c;
    switch(choice)
    {
    case 1:
        c=a+b;
        printf("case 1 c= %d ",c);
        break;
    case 2:
        CASE;break;
    default:
        DEF;
    }

}
