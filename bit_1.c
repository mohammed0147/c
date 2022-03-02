#include <stdio.h>
main()
{
    int n=0b010011,i,r,count=0,b;//n=19
    int m=133;
    int temp =m;
    printf("%d\n",n);

    int mask=0b000001;
    printf("%d\n",mask);

    for(i=0;i<8;i++)
    {
        if(r=n&(1<<i))
            count++;
    }
    printf("No. of ones in given number are %d\n",count);

    printf(" Before ");

    while(temp>0)
    {
        b=temp%2;
        printf("%d ",b);
        temp=temp/2;
    }

    printf(" \nAfter   ");

    for(i=0;i<9;i++)
        m=m^(1<<i);
    while(m>0)
    {
        b=m%2;
        printf("%d ",b);
        m=m/2;
    }

}
