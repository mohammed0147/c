#include<stdio.h>
//int sum(int,int);

main()
{
   int a,b,c;
   printf("enter 2 numbers ");
   scanf("%d%d", &a,&b);
   c=sum(a,b);
   printf("sum=%d", c);
}
int sum(int a,int b)
{
   int c;
   c= a+b;
   return c;
}
