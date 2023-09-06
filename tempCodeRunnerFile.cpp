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