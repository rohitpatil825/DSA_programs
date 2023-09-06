#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int a)
    {
        data=a;
        next=NULL;
    }
};
class Queue
{
    Node *rear,*front;
    public:
        Queue()
        {
            front=NULL;
            rear=NULL;
        }
        void insert(int n)
        {
            Node *t;
            t=new Node(n);
            if(rear==NULL)
            {
                rear=t;
                front=t;
                return;
            }
            rear->next=t;
            rear=t;
        }
        void Delete()
        {
            if(front==NULL)
            {
                cout<<"\n Queue is empty ";
                return;
            }
            Node *t;
            t=front;
            if(front==rear)
            {
                front=NULL;
                rear=NULL;
            }
            else
            {
                front=front->next;
            }
            cout<<t->data<<" no deleted successfully ";
            delete(t);
            
        }
        void print()
        {
            if(front==NULL)
            {
                cout<<"\n Queue is empty ";
                return;
            }
            Node *t;
            t=front;
            while(t!=NULL)
            {
                cout<<t->data<<"\t";
                t=t->next;
            }
        }
        void peek()
        {
            if(front==NULL)
            {
                cout<<"\n list is empty ";
                return;
            }
            cout<<front->data <<" is front element of the queue ";
        }
        
};
int main()
{
     Queue s;
    int a,ch;
    cout<<"\n Queue Menu "
        <<"\n 1.insert"
        <<"\n 2.Delete"
        <<"\n 3.peek"
        <<"\n 4.print"
        <<"\n 5.Exit";
    do
    {
        cout<<"\n enter your choice : ";
        cin>>ch;
         switch(ch)
         {
            case 1:
                 cout<<"\n enter element to insert : ";
                 cin>>a;
                 s.insert(a);
                 break;
            case 2:
                s.Delete();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                s.print();
            case 5:
                break;
            default:
                cout<<"\n invalid choice ";
         }
    } while (ch!=5);
    return 0;
}