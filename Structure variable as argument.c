#include<stdio.h>
void fun(char c);

typedef struct student
{
    char c;
}stu;
main()
{
    stu s1;
    s1.c='a';
    printf("before %c\n",s1.c);
    fun(s1.c);
}
void fun(char c)
{
    printf("after %c\n",c);
}
