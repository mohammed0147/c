

#include <stdio.h>
#include <string.h>
void fun(struct rectangle rec);

struct rectangle
{
    int len;
    int wid;
    int area;
};
int main()
{
    struct rectangle rec;
    rec.len=10;
    rec.wid=20;
    rec.area=0;
    fun(rec);
    return 0;
}

void fun(struct rectangle rec)
{
    //rec.area=rec.len*rec.wid;
    printf("%d",rec.area);
}
