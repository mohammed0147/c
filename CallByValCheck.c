#include <stdio.h>
int fun(int x,int y);//Declaration
main()
{
    //static int a=10;
     int a=10,b=20;
    fun(a,b);//Function Call
    printf("came back to main a= %d b= %d ",a,b);
   // printf("Working %d \n",z);


}
int fun(int x,int y)//Function Definition
{
    x=40;
    y=50;
    return 0;
}
