#include<iostream>
using namespace std;
#define size1 4
#define size2 6
class Msort
{
    int x[size1],y[size2];
    int z[size1+size2];
    public:
        Msort()
        {
            for(int i=0;i<size1;i++)
            {
                x[i]=0;
            }
            for(int i=0;i<size2;i++)
            {
                y[i]=0;
            }
        }
        void input()
        {
            cout<<"\n enter a element for X array in desending order : ";
            for(int i=0;i<size1;i++)
            {
                cout<<"\n enter a no : ";
                cin>>x[i];
            }
            cout<<"\n enter a element for y array in desending  order : ";
            for(int i=0;i<size2;i++)
            {
                cout<<"\n enter a no : ";
                cin>>y[i];
            }
        }
        void show()
        {
            cout<<"\n Element of array X is : ";
            for(int i=0;i<size1;i++)
            {
                cout<<x[i]<<"\t";
            }
            cout<<"\n Element of array Y is : ";
            for(int i=0;i<size2;i++)
            {
                cout<<y[i]<<"\t";
            }
        }
        void sort()
        {
            int i=0,j=0,k=0;
            while(i<size1 && j<size2)
            {
                if(x[i]>y[j])
                {
                    z[k]=x[i];
                     i++;
                     k++;
                }
                else
                {
                    z[k]=y[j];
                    j++;
                    k++;
                }
            }
                while(i<size1)
                {
                    z[k]=x[i];
                     i++;
                     k++;
                }
                while(j<size2)
                {
                    z[k]=y[j];
                    j++;
                    k++;
                }
                cout<<"\n Sorting successfully :  ";
                for(int i=0;i<(size1+size2);i++)
                {
                    cout<<z[i]<<"\t";
                }
            
        }
};
int main()
{
    Msort s;
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