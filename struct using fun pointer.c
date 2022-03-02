#include<stdio.h>
void swap(int *x,int *y);
void are(int *x,int *y,int *z);
//void ar(struct rectangle rec );

typedef struct rectangle
{
    int len;
    int wid;
    int area;
}rec;
main()
{
    rec r;
    r.len=10;
    r.wid=20;
    r.area=0;
    printf("Before swapping len = %d and wid = %d \n",r.len,r.wid);

    void (*fp)(int * ,int *);
    fp=swap;
    fp(&(r.len),&(r.wid));

    printf("After swapping len = %d and wid = %d  ",r.len,r.wid);

    void (*fp2)(int *,int *,int *);
    fp2=are;
    fp2(&(r.len),&(r.wid),&(r.area));

    printf(" \narea of rec using elements is %d",r.area);
/*
    void (*fp3)(rec );
    fp3=ar;
    fp3(r);
    */
}

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void are(int *x,int *y,int *z)
{
    *z=*x * *y;
}
/*
void ar(struct rectangle rec )
{
    r.area=(r.len)*(r.wid);
    printf("\n in fun %d\n",r.area);
}
*/
