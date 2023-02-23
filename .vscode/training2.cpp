    #include<iostream>
    using namespace std;
    int main()
    {
        int a,d,c;
        string b;
        cout<<"Enter Your Choice"<<endl<<"1.Print Hello World"<<endl<<"2.Print Your Name"<<endl<<"3.Add Two Numbers"<<endl;
        cin>>a;
        switch(a)
        {
            case 1:
            cout<<"Hello World";
            break;
            case 2:
            cout<<"Enter Your Name:";
            getline(cin>>ws,b);
            cout<<b;
            break;
            case 3:
            cout<<"Enter The Two Numbers:"<<endl;
            cin>>c>>d;
            cout<<"The Sum Is:"<<c+d<<endl;
            break;
            default:
            cout<<"----Wrong Input----";
        }
        return 0;
    }