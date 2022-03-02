#include <stdio.h> /* function declaration */
void next(void);
static int counter = 7; /* global variable */
main()
{
 while(counter<10)
 {
      next();
      counter++;
 }
}
void next( void )
 {    /* function definition */
   static int iteration = 13; /* local static variable */
   iteration ++;
   printf("iteration=%d and counter= %d\n", iteration, counter);
 }
