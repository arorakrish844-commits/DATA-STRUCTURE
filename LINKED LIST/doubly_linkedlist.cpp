#include<iostream>
using namespace std;
struct node
{
    int info;
    struct node *next,*prev;
};
struct node *create_node(int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->info=x;
    temp->next=NULL;
    temp->prev=NULL;
    return(temp);
}
struct node *first=NULL,*last=NULL;
void insert_first(int x)
{
    struct node *temp;
    temp=create_node(x);
    if(first==NULL)
    {
        first=temp;
        last=temp;
    }
    else
    {
        temp->next=first;
        first->prev=temp;
        first=temp;
    }
}
void insert_last(int x)
{
    struct node *temp;
    temp=create_node(x);
    if(first==NULL)
    {
        first=temp;
        last=temp;
    }
    else
    {
        last->next=temp;
        temp->prev=last;
        last=temp;
    }
}
void insert(int pos, int x)
{
    struct node *temp,*y;
    temp=create_node(x);
    int c=1;
    y=first;
    while(c!=pos-1)
    {
        y=y->next;
        c++;
    }
    temp->next=y->next;
    y->next->prev=temp;
    y->next=temp;
    temp->prev=y;
}
void display(int x)
{
    if(first!=NULL)
    {
        
    }
}