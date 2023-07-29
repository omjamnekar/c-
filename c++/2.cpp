#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int info;
    struct node *next;
}*begin1;
void insert(int n);//function prototype
void display();//function prototype
void search(int data,int n);//function prototype
int main()
{
    int n,data;
    cout<<"\nEnter number of Nodes:";
    cin>>n;
    insert(n);//function call
    cout<<"\nThe linked list is:";
    display();//function prototype
    cout<<"\n Enter element you want to search: ";
    cin>>data;
    search(data,n);
    getch();
}
void insert(int n)
{
    struct node *new_node,*ptr;
    int num,i;
    begin1=(struct node *)malloc(sizeof(struct node));
    if(begin1==NULL)
    {
        cout<<"\nMemory cannot be allocated";
    }
    else
    {
        cout<<"\nInput data for Node 1: ";
        cin>>num;
        begin1->info=num;
        begin1->next=NULL;
        ptr=begin1;
        for(i=2;i<=n;i++)
        {
            new_node=(struct node *)malloc(sizeof(struct node));
            if(new_node==NULL)
            {
                cout<<"\nMemory cannot be allocated";
            }
            else
            {
                cout<<"\nInput data for Node "<<i<<": ";
                cin>>num;
                new_node->info=num;
                new_node->next=NULL;
                ptr->next=new_node;
                ptr=ptr->next;
            }
        }
    }
}
void display()
{
    struct node *ptr;
    //Step1
    if(begin1==NULL)
    {
        cout<<"\n Linked list is empty";
    }
    else
    {
        //Step2
        ptr=begin1;
        //Step3
        while(ptr!=NULL)
        {
            cout<<ptr->info<<" ";
            ptr=ptr->next;
        }

    }
}
void search(int data,int n)
{
    struct node *ptr;
    int i=0,flag;
    //Step 2
    ptr=begin1;
    //Step 1
    if(begin1==NULL)
    {
        cout<<"\n Linked List is empty";
    }
    else
    {
        //Step 3
        while(ptr!=NULL)
        {
            if(ptr->info==data)
            {
                cout<<"\n"<<data<<" is found at location "<<(i+1);
                flag=0;
            }
            else
            {
                flag++;
            }
            i++;
            ptr=ptr->next;
        }
        if(flag==n)
        {
            cout<<"\n Data is not found";
        }
    }
}
