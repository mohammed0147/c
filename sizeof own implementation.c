#include <stdio.h>
#define my_sizeof(type) (char *)(&type+1)-(char*)(&type)
main()
{
   int x = 10;
   char y = 'f';
   double z = 254748.23;
   printf("size of x: %d\n", my_sizeof(x));
   printf("size of y: %d\n", my_sizeof(y));
   printf("size of z: %d\n", my_sizeof(z));
}
