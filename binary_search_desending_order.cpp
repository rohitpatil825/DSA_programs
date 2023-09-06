#include<iostream>
using namespace std;
#define size 5
class Binary
{
    
    int x[size];
    public:
        Binary()
        {
            for (int i=0;i<size;i++){
                x[i]=0;
            }
        }
        void input(){
            cout<<"\n enter a 5 element in desending order in array : ";
            for(int i=0;i<size;i++){
                cin>>x[i];
            }
        }
        void show(){
            cout<<"\n array element is : ";
            for(int i=0;i<size;i++){
                cout<<x[i]<<"\t";
            }
        }
        void search(int a){
            int lb=0;
            int ub=size-1;
            int mid=(lb+ub)/2;
            while(a!=x[mid] && lb<=ub)
            {
                if(a>x[mid]){
                    ub=mid-1;
                }
                else{
                    lb=mid+1;
                }
                mid=(lb+ub)/2;
            }
            if(lb<=ub){
                cout<<a<<" found at "<<mid<<" location ";
            }
            else{
                cout<<a<<" not found in array";
            }
        }
};
int main()
{
    Binary b;
    int ch,n;
        cout<<"\n *** search menu *** "
            <<"\n 1.input"
            <<"\n 2.show"
            <<"\n 3.Search"
            <<"\n 4.Exit";
     do{
            cout<<"\n Enter your choice : ";
            cin>>ch;    
            switch(ch){
                case 1:
                    b.input();
                    break;
                case 2:
                    b.show();
                    break;
                case 3:
                    cout<<"\n Enter a no search in array : ";
                    cin>>n;
                    b.search(n);
                    break;
                case 4:
                    break;
                default: 
                    cout<<"\n Invalid choice ";
            }
    }while(ch!=4); 
    return 0;
}