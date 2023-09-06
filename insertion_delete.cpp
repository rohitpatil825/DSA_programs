#include<iostream>
using namespace std;
#define Size 5
class ArrayDemo
{
    int x[Size];
    public:
        ArrayDemo()
        {
            for (int i = 0; i<Size; i++)
            {
                x[i]=0;
            }
            
        }
        void input()
        {
            cout<<"\n Enter a  5 element in array : ";
            {
                for(int i=0;i<Size;i++)
                {
                    cin>>x[i];
                }
            }
        }
        void show()
        {
            cout<<"\n Element of array is : ";
            for(int i=0;i<Size;i++)
                {
                    cout<<x[i]<<"\t";
                }
        }
        void insert(int n,int loc)
        {
            if(loc<0 ||loc>=5)
            {
                cout<<"\n Invalid location ";
                return;
            }
            int i=Size-2;
              while(i>=loc)
            {
                x[i+1]=x[i];
                i--;
            }
            x[i+1]=n;
        }
        void Delete(int loc)
        {
            if(loc<0 ||loc>=5)
            {
                cout<<"\n Invalid location";
                return;
            }
            int i=loc+1;
            while(i<Size)
            {
                x[i-1]=x[i];
                i++;
            }
            x[i-1]=0;
        }
};
int main()
{
    int ch,n,loc;
    ArrayDemo ob;
    do
    {
    cout<<"\n Array Menu ";
    cout<<"\n 1.input"
        <<"\n 2.show"
        <<"\n 3.insert"
        <<"\n 4.delete"
        <<"\n 5.Exit";
    
    cout<<"\n Enter your Choice : ";
    cin>>ch;
    switch (ch)
    {
        case 1:
            ob.input();
            break;
        case 2:
            ob.show();
            break;
        case 3:
            cout<<"\n Enter a NO and LOCATION : ";
            cin>>n>>loc;
            ob.insert(n,loc);
            break;
        case 4 :
            cout<<"\n Enter a LOCATION : ";
            cin>>loc;
            ob.Delete(loc);
            break;
        case 5:
            break;
        default :
            cout<<"\n Invalid choice ";
    }
    }while(ch!=5);
    return 0;
}