#include <stdio.h>
int fun(int *p1,int *p2);//Declaration
main()
{
    //static int a=10;
     int a=10,b=20;
    fun(&a,&b);//Function Call
    printf("came back to main a= %d b= %d ",a,b);
   // printf("Working %d \n",z);


}
int fun(int *p1,int *p2)//Function Definition
{
    *p1=40;
    *p2=50;
    return 0;
}
