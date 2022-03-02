/*#include<stdio.h>
struct stu
{
    char c;
};
main()
{
    struct stu s;
    s.c='a';
    printf("%c",s.c);
}
*/



/*
 #include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[20];
    int id;
    struct student *ptr;
};

int main()
{
    struct student *s;
    s=(struct student *)malloc(sizeof(struct student));
    printf("Enter a name and rollnumber: ");
    scanf("%s%d",s->name,&s->id);
    printf("Name: %s\nRollNo: %d\n",s->name,s->id);
    return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[20];
    //int id;
    //struct student *ptr;
};

struct teacher
{
    char name[20];
    //int id;
   // struct student *ptr;
};

main()
{
    struct student s;
    struct teacher t;
    int i,count=0;

    //s=(struct student *)malloc(sizeof(struct student));
    printf("Enter a names : \n");
    scanf("%s",&s.name);
    scanf("%s",&t.name);

    for(i=0;s.name[i]!='\0';i++)
    {
        if((s.name[i])!=(t.name[i]))
        {
            count++;
            printf("Not same");
        }
    }
    if(count==0)
    {
        printf("same");
    }

}
