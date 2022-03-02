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
    while((i++)<5)
    {
        printf("Enter data : ");
        scanf("%d",&data);
        insert(data);
    }
    display();
    sorting();
    display();
/*
    printf("Enter the number to be searched : ");
    scanf("%d",&ele);
    search(ele);
    */
}

void insert(int data)
{
    nod *new=(nod *)malloc(sizeof(nod));
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
            nod *temp=head;
            while(temp->link!=NULL) //   ///Trying to find the last node which has NULL
            {
                temp=temp->link;
            }
            temp->link=new;/// Now we are linking the last node to temp
        }
        new->data=data;
        new->link=NULL;

    }
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
            printf("%d ",temp->data);
            temp=temp->link;
        }
        printf("\n");
    }
}

void sorting()
{
    /*
    nod *temp=head;
    if(head==NULL)
    {
        printf("Can't  be done \n");
    }
    else
    {
        int tem=0,i,j;
       // printf("%d\n",temp->link->data);
        //printf("%p\n",temp->link);
        for(i=0;temp!=NULL;i++)
        {
            for(j=i+1;temp!=NULL;j++)
            {
                if((temp->data)<(temp->link->data))
                {
                    tem=(temp->data);
                    (temp->data)=(temp->link->data);
                    (temp->link->data)=tem;
                }
                temp=temp->link;
            }
             temp=head->link;
            // temp->link=temp->link->link;
           // tem=0;
       }
    }
    temp=NULL;

    */

    int i,j,a;

    nod *temp1;
    nod *temp2;

    for(temp1=head;temp1!=NULL;temp1=temp1->link)
    {
        for(temp2=temp1->link;temp2!=NULL;temp2=temp2->link)
        {
            if((temp1->data)<(temp2->data))
            {
                a = temp1->data;
               temp1->data = temp2->data;
               temp2->data = a;
            }
        }
    }
}
/*
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

*/

