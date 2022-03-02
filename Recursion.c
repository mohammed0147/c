#include<stdio.h>
main()
{
    int a=5;
    fact(a);
}

fact(int x)
{
    static int prod=1,y;
    y=x;
    prod=prod*y;
    if(y>1)
    {
        y=y-1;
        fact(y);
    }
    else
        printf("%d",prod);


}
