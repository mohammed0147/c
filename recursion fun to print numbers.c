#include<stdio.h>
void recursion(int n);
main()
{
    int a=10;
    recursion(a);

}
void recursion(int a)
{
    static int n;
    n=a;
    printf("%d ",n);
    n=n-1;
    while(n>0)
    {
        recursion(n);
    }
}
