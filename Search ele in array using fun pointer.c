
#include<stdio.h>
#define N 5
void search(int *x,int y,int *z);
main()
{
    int arr1[N],i,temp,n,count=0;
    int const *p1=arr1;
    int size=sizeof(arr1)/sizeof(int);
    //size=5

    int (*fp)(int *,int ,int * )=&search;


    printf("Enter 5 values of array   \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",p1+i);
    }
    printf("Enter number which u want to search \n");
    scanf("%d",&n);

    for(i=0;i<size;i++)
    {
        fp((p1+i),n,&count);
      /*  temp=*(p1+i);
        *(p1+i)=*(p2+i);
        *(p2+i)=temp;*/
    }
    if(count==0)
    {
        printf("Not present");
    }


}

void search(int *x,int y,int *z)
{
    if(*x==y)
    {
        *z=*z+1;
        printf("Present");
    }


}
