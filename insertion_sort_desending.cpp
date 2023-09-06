#include<iostream>
using namespace std;
#define size 5
class Isort
{
    int x[size];
    public:
        Isort()
        {
            for (int i=0;i<size;i++){
                x[i]=0;
            }
        }
        void input(){
            cout<<"\n enter a 5 element in X array in radom order : ";
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
            int t,j;
            for(int i=0;i<size;i++)
            {
                t=x[i];
                j=i-1;
                while(t>x[j] && j>=0)
                {
                    x[j+1]=x[j];
                    j--;
                }
                x[j+1]=t;
                show();
            }
        }
};
int main()
{
     Isort s;
    int ch;
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