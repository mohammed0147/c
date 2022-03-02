#include<stdio.h>
//void sum ( int a, int b);//Declaration
main()
{
   int a,b;
   printf("enter 2 numbers ");
   scanf("%d%d", &a,&b);
   sum (a,b);
}
void sum(int a,int b)
{
   int c;
   c= a+b;
   printf ("sum=%d", c);
}

