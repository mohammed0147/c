#include<stdio.h>
main()
{
    int b=0b10011101;
   int a=139,count=0,count2=0,r;//a=0b10001011

   while(a>0)
   {
       r=a%2;
       if(r==0)
       {
           count++;
       }
       else
        count2++;
       a=a/2;
   }
   printf("No. of zeros in integer number are %d\n",count);
   printf("No. of ones in integer number are %d\n",count2);

   count=0;
   count2=0;
    while(b>0)
   {
       r=b%2;
       if(r==0)
       {
           count++;
       }
       else
        count2++;
       b=b/2;
   }
   printf("No. of zeros in binary number are %d\n",count);
   printf("No. of ones in binary number are %d\n",count2);


}
