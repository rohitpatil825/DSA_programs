#include<iostream>
using namespace std;
#define size 5
class Q
{
    int x[size];
    int rear,front;
    public:
        Q();
        void insert(int a);
        void Delete();
        void show();
        void peek();
};
Q::Q()
{
    rear=-1;
    front=-1; 
}
void Q::insert(int a)
{
    if(rear==size-1)
    {
        cout<<"\n Queue is full ";
        return;
    }
    rear++;
    x[rear]=a;
    if(front==-1)
    {
        front=0;
    }
}
void Q::Delete()
{
    if(front==-1)
    {
        cout<<"\n Queue is Empty ";
        return;
    }
    cout<<x[front]<<" is delete from "<<front<<" location ";
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front++;
    }
}
void Q::peek()
{
    if(front==-1)
    {
        cout<<"\n queue is empty ";
        return;
    }
    cout<<"\n front element of Queue is : "<<x[front];
}
void Q::show()
{
    if(front==-1)
    {
        cout<<"\n Queue is empty ";
    }
    cout<<"\n Queue element is : ";
    for(int i=front;i<=rear;i++)
    {
        cout<<x[i]<<"\t";
    }
}
int main()
{
    Q s;
    int a,ch;
    cout<<"\n Queue Menu "
        <<"\n 1.insert"
        <<"\n 2.Delete"
        <<"\n 3.peek"
        <<"\n 4.show"
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
                s.show();
            case 5:
                break;
            default:
                cout<<"\n invalid choice ";
         }
    } while (ch!=5);
    
    return 0;
}