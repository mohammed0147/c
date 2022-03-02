#include<stdio.h>
main()
{
    int a=139,r,pos;
     int temp=a;
    while(a>0)
    {
        r=a%2;
        printf("%d ",r);
        a=a/2;
    }
    printf("\n Enter Position\n");
    scanf("%d",&pos);
    temp=temp|(1<<pos);
    printf("%d \n",temp);

    while(temp>0)
    {
        r=temp%2;
        printf("%d ",r);
        temp=temp/2;
    }
   // bit=32-(pos%32)-1;
   // *p=*p|(1<<bit);
   // printf("%x",a[2]);
}
