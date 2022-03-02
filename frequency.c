#include <stdio.h>

const int MAX = 3;

int main () {

   int  var[] = {10, 100, 200};
   int i, *ptr[MAX], (*ptr_arr)[3];


   for ( i = 0; i < MAX; i++) {
      *(ptr+i)= &var[i]; /* assign the address of integer. */
   }
   printf("size of ptr = %d\n", sizeof(ptr) );
   printf("size of ptr_arr = %d\n", sizeof(ptr_arr) );

   for ( i = 0; i < MAX; i++) {
      printf("Value of var[%d] = %d\n", i, *ptr[i] );

      printf("Pointer way Value of var[%d] = %d\n", i, **(ptr+i) );
   }

   return 0;
}
