#include<iostream>
using namespace std;
#define size 5
class Q
{
    int x[size];
    int rear,front;
    public:
        Q();
        void insert(int n);
        void Delete();
        void peek();
        void show();
};
Q::Q()
{
    front=-1;
    rear=-1;
}
void Q::insert(int n)
{
    if((rear+1)%size==front)
    {
        cout<<"\n Queue is full ";
        return;
    }
    rear=(rear+1)%size;
    x[rear]=n;
    if(front==-1)
    {
        front=0;
    }
}
void Q::Delete()
{
    if(front==-1)
    {
        cout<<"\n Queue is empty";
        return;
    }
    cout<<x[front]<<" delete from "<<front<<" location";
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front=(front+1)%size;
    }
}
void Q:: show()
{
    if(front==-1)
    {
        cout<<"\n Queue is empty";
        return;
    }
    int i=front;
    cout<<"\n Queue Element is : \n";
    while(1)
    {
        cout<<x[i]<<"\t";
        if(i==rear)
        {
            break;
        }
        i=(i+1)%size;
    }
}
void Q::peek()
{
    if(front==-1)
    {        
        cout<<"\n Queue is Empty";
        return;
    }
    cout<<x[front]<<" is front element of queue";
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