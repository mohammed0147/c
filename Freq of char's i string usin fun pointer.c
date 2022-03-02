
#include<stdio.h>
#include<string.h>
void freq(char str[],int len,int count);/// Prototype

main()
{
    int i,j,k,l=0,count=1,len=0;
    char str[]="abcabcddd";
    //if(str[0]=='a')
    //   printf("%c",str[0]);

     while(str[l]!='\0')
     {
         len++;
         l++;
     }
     printf("String length is %d\n",len);

     void (*fp)(char str[],int len, int count)=&freq;//fun pointer declaring and initializing to fun address
     fp(str,len,count);//                              Fun call

}

void freq(char str[],int len,int count)///            Fun Def
{
    int i,j;
     for(i=0;i<len;i++)//////first element initialization                loop=1
     {
        for(j=0;j<i;j++)///////Remove duplicate                          loop=2
        {
            if(str[i]==str[j])/////comparing the present char is same as previous
            {
                break;//////////               if satisfy if break the for loop 2
            }
        }
            if(i==j)///Comparing positions if same satisfy else unsatisfy
            {
                for(j=i+1;j<len;j++)//                                    loop=3
                {
                    if(str[i]==str[j])////// comparing next char with previous char
                    {
                       count++;///////////////Incrementing count value i.e., char's
                    }
                }
              printf("%c is repeated %d times \n",str[i],count);////Printing
              count=1;/////////////////////////////////////////////Reset count to 1

            }
    }

}
