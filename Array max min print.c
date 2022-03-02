
#include <stdio.h>
main()
{
    int arr[]={2,4,18,-1,50,36},size;
    size=sizeof(arr)/sizeof(int);

   lar(arr,size);
  // printf("Result in main also same as definition %d",r);
   // min(arr,size);
  // print(arr,size);

}

lar(int b[],int m)
{
    int i,j,temp=*b;
        for(j=0;j<m;j++)//sizeof(b)/sizeof(int)
        {
        if(temp<(*(b+j)))
        {
            temp=*(b+j);
        }
        }

        printf("Largest number is %d\n",temp);
}

min(int b[],int m)
{
    int i,j,temp;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)//sizeof(b)/sizeof(int)
        {
        if((*(b+j))>(*(b+i)))
        {
            temp=*(b+i);
            *(b+i)=*(b+j);
            *(b+j)=temp;
        }
        }
    }

        printf("Smallest number is %d\n",*(b+(m-1)));
}

print(int b[],int m)
{
    int j;

    printf("The array values are \n");
        for(j=0;j<m;j++)//sizeof(b)/sizeof(int)
        {
           printf("%d ",*(b+j));
        }

}



