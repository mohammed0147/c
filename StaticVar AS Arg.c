#include<stdio.h>
main()
{
    static int a=10;
    fun(a);
}
fun(x)
{
    x++;
    x++;
    printf("%d",x);
}
