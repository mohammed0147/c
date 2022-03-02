#include<stdio.h>
void area_rectangle(re r);
typedef struct rect
{
    int len;
    int wid;
    int area;
}re;

main()
{
    re r;
    r.len=10;
    r.wid=20;
    //r.c=0;
    //fun(r);
    void (*fp)(re )=&area_rectangle;

    fp(r);
}
/*
void fun(re r)
{
    printf("%d\n",r.len*r.wid);
}
*/
void area_rectangle(re r)
{
    printf("%d\n",r.len*r.wid);
}
