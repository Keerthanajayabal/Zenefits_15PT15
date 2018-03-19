#include<stdio.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *nxt,*lft,*rit;
};
node* head=NULL;
node* lft=NULL;
node* rit=NULL;

void Inorder(node* head)
{
    while(head!=NULL)
    {
        Inorder(head->lft);
        cout<<"\n"<<head->data;
        Inorder(head->rit);
    }
}
void Insert(int a[],int n,int noe)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    for(int j=0;j<n;j++)
    {
    for(int i=0;i<noe;i++)
    {
    node* ptr=new node;
    ptr=head;
    node* temp=new node;
    node*root=new node;
    root=head;
    if(ptr==NULL)
    {
        temp->data=a[i];
        temp->lft=a[i+1];
        temp->rit=a[i+2];
        ptr=ptr->lft;
        continue;
    }
    else
    {
        temp->data=a[i];
        temp->lft=a[i+1];
        temp->rit=a[i+2];
        ptr=ptr->lft;
    }
    }
    Inorder(root);
    }
}
main()
{
    int i,j,n,a[50],noe;
    cout<<"\n";
    cin>>n>>noe;
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<noe;j++)
        {
            cin>>a[j];
        }
    }
    Insert(a,n,noe);
}



