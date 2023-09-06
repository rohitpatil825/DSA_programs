#include<iostream>
using namespace std;
#define size 5
class Search
{
    int x[size];
    public:
        Search()
        {
            for (int i=0;i<size;i++){
                x[i]=0;
            }
        }
        void input(){
            cout<<"\n enter a 5 element in X array : ";
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
        void find(int a){
            for(int i=0;i<size;i++){
                if(a==x[i])
                {
                    cout<<a<<" found at "<<i<<" location";
                    return;
                }
            }
            cout<<a<<" not found in array";
        }
};
int main()
{
    Search s;
    int ch,n;
        cout<<"\n search menu "
            <<"\n 1.input"
            <<"\n 2.show"
            <<"\n 3.Search"
            <<"\n 4.Exit";
     do{
            cout<<"\n Enter your choice : ";
            cin>>ch;
            switch(ch){
                case 1:
                    s.input();
                    break;
                case 2:
                    s.show();
                    break;
                case 3:
                    cout<<"\n Enter a no search in array : ";
                    cin>>n;
                    s.find(n);
                    break;
                case 4:
                    break;
                default: 
                    cout<<"\n Invalid choice ";
            }
    }while(ch!=4); 
    return 0;
}