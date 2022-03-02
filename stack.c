#include<stdio.h>
void push(nod **top_arg,int data);
typedef struct node
{
    int data;
    struct node *link;
}nod;

main()
{
    nod *top=NULL;
    push(&top,10);

}

void push(nod **top_arg,int data)
{
    nod *new=(nod *)malloc(sizeof(nod));
    if(new==NULL)
    {
        printf(" Memory not created");
    }
    else
    {
        new->data=data;
        new->link=NULL;

        if(*top_arg==NULL)
        {
            *top_arg=new;
        }
        else
        {
            new->link=*top_arg;
            *top_arg=new;
        }
        printf("%d ",new->data);
    }
}
