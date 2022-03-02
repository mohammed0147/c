#include<stdio.h>
int eo(int x);

main()
{
    enum evod{zero,one};

    int a=20,r;
    r=eo(a);

    if(r==zero)
        printf("The given number is Even\n");
    if(r==one)
        printf("The given number is Odd\n");

    (r==zero)?printf("As per Ternary operator The given number is Even"):printf("As per Ternary operator The given number is Odd");

}
int eo(int x)
{
    if(x%2==0)
        return 0;
    else
        return 1;
}
