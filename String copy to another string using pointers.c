
#include <stdio.h>

int main()
{
    char str[20]="Hi Kalyani";
    char str2[20];
    char *ptr=str,*ptr2=str2;
    while(*ptr!='\0')
    {
        *ptr2=*ptr;
        printf("%c",*ptr2);
        ptr++;
        ptr2++;
    }
        printf("\nOutside loop %s",str2);
    return 0;
}

