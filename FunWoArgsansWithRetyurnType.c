#include<stdio.h>
sum();//fun declaration
main()
{
   int c;
   c=sum();//fun call
   printf("sum = %d",c);
}
sum()//fun def
{
   int a,b,c;
   printf("enter 2 numbers ");
   scanf("%d%d", &a, &b);
   c =a+b;
   printf("sum is %d",c);
   //return c;
}
