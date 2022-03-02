#include<stdio.h>
typedef struct node
{
    int data;
    struct node *link;
}nod;

nod *head=NULL;

main()
{
    int data,i=0,ele;
    while((i++)<3)
    {
        printf("Enter data : ");
        scanf("%d",&data);
        insert(data);
    }
    display();

    printf("Enter the number to be searched : ");
    scanf("%d",&ele);
    search(ele);
}

void insert(int data)
{
    nod *new=(nod *)malloc(sizeof(nod));
    nod *temp=head;
    if(new==NULL)
    {
        printf(" memory is not allocated");
    }
    else
    {
        if(head==NULL)/// Checking wheather theere is any node or not
        {
            head=new;//1st node is created
        }
        else//  If there is atleast one node
        {
            while(temp->link!=NULL) //   ///Trying to find the last node which has NULL
            {
                temp=temp->link;
            }
            temp->link=new;/// Now we are linking the last node
        }
        new->data=data;
        new->link=NULL;
    }
    //temp=head;

}
void display()
{
    nod *temp=head;  ///Creating temp * and assigining the head to it
    if(head==NULL)//    Cheaking wheather the first node i.e., is NULL or not
    {
        printf("List is empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d \n",temp->data);
            temp=temp->link;
        }
    }
}

search(int ele)
{
    nod *temp=head;
    if(temp==NULL)
    {
        printf("List is emplty");
    }
    else
    {
        while(temp!=NULL)
        {
            if(temp->data==ele)
            {
                printf(" Element is present");
                exit(1);
            }
            else
            {
                temp=temp->link;
            }
        }
        printf(" Element not found \n");
    }
}

