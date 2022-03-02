#include<stdio.h>
main()
{
    int i;
    int *ptr=(int *)malloc(5*4);
    //ptr[0]=10;
   // printf("%d",*ptr);
   input(&ptr);

    for(i=0;i<5;i++)
   {
       printf("%d",*(ptr+i));
   }
}

void input(int *ptr)
{

}
