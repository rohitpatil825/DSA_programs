#include<iostream>
using namespace std;
#define size 5
class Sort
{
    int x[size];
    public:
        Sort()
        {
            for(int i=0;i<size;i++){
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
        void sort()
        {
            for(int i=0;i<size-1;i++)
            {
                for(int j=i+1;j<size;j++)
                {
                    if(x[j]>x[i])
                    {
                        int t=x[i];
                        x[i]=x[j];
                        x[j]=t;
                        show();
                    }
                }
            }
        }
};
int main()
{
    Sort s;
    int ch,n;
        cout<<"\n search menu "
            <<"\n 1.input"
            <<"\n 2.show"
            <<"\n 3.Sort"
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
                    s.sort();
                    break;
                case 4:
                    break;
                default: 
                    cout<<"\n Invalid choice ";
            }
    }while(ch!=4); 
    return 0;
}