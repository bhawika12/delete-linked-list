#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class node1
{
public:
    node *temp;
    node *start=NULL;
    node *newnode;
    void createnode()
    {
        cout<<"element:-";
        newnode=new node();
        cin>>newnode->data;
        newnode->next=NULL;
    }
    void insertion()
    {
        int n,element;
        cout<<"enter the number of elements";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            createnode();
            if(start==NULL)
                start=newnode;
            else
            {
                temp=start;
                while(temp->next!=NULL)
                    temp=temp->next;
                temp->next=newnode;
            }
        }
        cout<<"enter the element:-";
        cin>>element;
        temp=start;
        for(int j=0;j<n;j++)
        {
            while(element!=temp->next->data)
            {
                temp=temp->next;
            }
        }
        temp->next=temp->next->next;

    }
    void display()
    {
        temp=start;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};

int main()
{
    node1 n;
    n.insertion();
    n.display();
}
