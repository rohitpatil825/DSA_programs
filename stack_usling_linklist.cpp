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
class Stack
{
    Node *top;
    public:
         Stack()
         {
            top=NULL;
         }
         void push(int a)
         {
            Node *t;
            t=new Node(a);
            t->next=top;
            top=t;
            cout<<"\n no push successfully ";
         }
          void pop()
         {
            if(top==NULL)
            {
                cout<<"\n List is empty ";
                return;
            }
            Node *t;
            t=top;
            top=top->next;
            cout<<" no popped successfully";
            delete(t);
         }
         void print()
         {
            if(top==NULL)
            {
                cout<<"\n list is empty ";
                return;
            }
            Node *t;
            t=top;
            while(t!=NULL)
            {
                cout<<t->data<<"\n";
                t=t->next;
            }
         }
         void peek()
         {
            if(top==NULL)
            {
                cout<<"\n list is empty";
                return;
            }
            cout<<top->data<<" is top element of stack ";
         }
};
int main()
{
    
    Stack s;
    int a,ch;
    cout<<"\n Stack Menu "
        <<"\n 1.push"
        <<"\n 2.pop"
        <<"\n 3.show"
        <<"\n 4.peek"
        <<"\n 5.Exit";
    do
    {
        cout<<"\n enter your choice : ";
        cin>>ch;
         switch(ch)
         {
            case 1:
                 cout<<"\n enter element to push : ";
                 cin>>a;
                 s.push(a);
                 break;
            case 2:
                s.pop();
                break;
            case 3:
                s.print();
                break;
            case 4:
                s.peek();
            case 5:
                break;
            default:
                cout<<"\n invalid choice ";
         }
    } while (ch!=5);
    
    return 0;
}