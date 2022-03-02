#include<stdio.h>
#include<stdlib.h>

void enq(int data,qu **f_arg,qu **r_arg);

typedef struct node
{
    int data;
    struct node *link;
}qu;
main()
{
    qu *front=NULL,qu *rear=NULL;
    enq(10,&front,&rear);
    enq(20,&front,&rear);
}

void enq(int data,qu **f_arg,qu **r_arg)
{
    qu *new=(qu*)malloc(sizeof(qu));
    if(new==NULL)
    {
        printf(" THe Q is empty");
    }
    else
    {
        new->data=data;
        new->link=NULL;
        if(*f_arg==NULL&&r_arg==NULL)
        {
            *f_arg=new;
            *r_arg=new;
        }
        else
        {
            (*r_arg)->link=new;
            *r_arg=new;
        }
        printf(" The element is %d \n",(*r_arg)->data);
    }

}
