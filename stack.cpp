// Stack implimentation
#include<iostream>
using namespace std;
#define Size 5
class Stack
{
    int x[Size];
    int top;
    public:
        Stack();
        void push(int a);
        void pop();
        void show();
        void peek();
};
Stack::Stack()
{
    top=-1;
}
void Stack::push(int a)
{
    if(top==Size -1)
    {
        cout<<"\n stack is Full";
        return;
    }
    top++;
    x[top]=a;
}
void Stack::pop()
{
    if(top==-1)
    {
        cout<<"\n Stack is Empty \n";
        return;
    }
    cout<<x[top]<<" is poped from "<<top<<" location\n";
    top--;
}
void Stack::show()
{
    if(top==-1)
    {
        cout<<"\n Stack is empty ";
        return;
    }
    cout<<"\n Stack is element is : \n ";
    for(int i=top;i>=0;i--)
    {
        cout<<x[i]<<endl;
    }
}
void Stack::peek()
{
    if(top==-1)
    {
        cout<<"\n stack is empty ";
        return;
    }
    cout<<"\n Top element of stack is : "<<x[top];
}
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
                s.show();
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