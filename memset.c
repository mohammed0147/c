#include<stdio.h>

main()
{
    char str[]="Hi how are you";

    printf("Before %s\n",str);

    memset(str+3,'r',9*sizeof(char));//starting address , with what we want replace , no. of elements to replace * size(datatype)
    printf("After %s",str);
}
