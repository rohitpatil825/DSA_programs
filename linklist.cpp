#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int n)
        {
            data=n;
            next=NULL;
        }
};
class Linkedlist
{
    Node *start;
    public:
         Linkedlist()
         {
            start=NULL;
         }
         void addbeg(int a)
         {
            Node *t;
            t=new Node(a);
            t->next=start;
            start=t;
            cout<<"\n Node added at beginning is successfully ";
         }
         void addend(int x)
         {
            Node *t;
            t=new Node(x);
            if(start==NULL)
            {
                start=t;
                cout<<"\n Node added to end of list successfully";
                return;
            }
            Node *p;
            p=start;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=t;
            cout<<"\n Node added to end of list successfully";
         }
         void delbeg()
         {
            if(start==NULL)
            {
                cout<<"\n List is empty ";
                return;
            }
            Node *t;
            t=start;
            start=start->next;
            delete(t);
            cout<<"\n delete node from beginning successfully";
         }
         void delend()
         {
            if(start==NULL)
            {
                cout<<"\n List is empty ";
                return;
            }
            Node *t,*p;
            t=start;
            p=start;
            while(t->next!=NULL)
            {
                p=t;
                t=t->next;
            }
            if(t==p)
            {
                start=NULL;
            }
            else
            {
                p->next=NULL;
            }
            delete(t);
            cout<<"\n delete node from end of list successfully";
         }
         void print()
         {
            if(start==NULL)
            {
                cout<<"\n list is empty ";
                return;
            }
            Node *t;  
            t=start;
            while(t!=NULL)
            {
                cout<<t->data<<"\t";
                t=t->next;
            }
         }
};
int main()
{
    Linkedlist ob;
    int a,b,ch;
    cout<<"\n list menu "
        <<"\n 1.addbeg "
        <<"\n 2.addend "
        <<"\n 3.delbeg "
        <<"\n 4.delend "
        <<"\n 5.print"
        <<"\n 6.Exit ";
    do
    {
        cout<<"\n enter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\n enter a no to add beginning of list : ";
                cin>>a;
                ob.addbeg(a);
                break;
            case 2:
                cout<<"\n enter a no to add end of list :  ";
                cin>>b;
                ob.addend(b);
                break;
            case 3:
                ob.delbeg();
                break;
            case 4:
                ob.delend();
                break;
            case 5:
                ob.print();
                break;
            case 6:
                break;
            default:
                cout<<"\n invalid choice ";
        }
    }while(ch!=6);
    return 0;
}