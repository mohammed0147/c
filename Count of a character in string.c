
#include<stdio.h>
main()
{
    int i,j,l=0,count=0,len=0;
    char str[]="abcabcddd hi hello how are you hello world",c;
    //if(str[0]=='a')
     //   printf("%c",str[0]);

     printf(" The string is :  %s\n",str);

     while(str[l]!='\0')
     {
         len++;
         l++;
     }
     printf("Lenghth of the string is %d\n",len);

     printf(" \nThe the character which u want to search in above string \n");
     scanf("%c",&c);

     for(i=0;i<len;i++)
    {
        if(str[i]==c)
            {
                count++;
            }
    }
    printf("%c is repeated %d times \n",c,count);
}
