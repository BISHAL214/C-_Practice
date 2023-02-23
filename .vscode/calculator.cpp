    #include<iostream>
    using namespace std;
    int main()
    {
        int a;
        char x;
        float b,c;
        cout<<"Enter Your Choice"<<endl<<"1.Addition Of The Numbers"<<endl<<"2.Substractation Of The Numbers"<<endl<<"3.Division Of The Numbers"<<endl<<"4.Multiplication Of The Numbers"<<endl;
        cin>>a;
        level:
        switch(a)
        {
            case 1:
            cout<<"Enter The 1st Number:";
            cin>>b;
            cout<<"Enter The 2nd Number:";
            cin>>c;
            cout<<"The Addition is:"<<b+c<<endl;
            break;
            case 2:
            cout<<"Enter The 1st Number:";
            cin>>b;
            cout<<"Enter The 2nd Number:";
            cin>>c;
            cout<<"The Subtractation is:"<<b-c<<endl;
            break;
            case 3:
            cout<<"Enter The 1st Number:";
            cin>>b;
            cout<<"Enter The 2nd Number:";
            cin>>c;
            cout<<"The Division is:"<<b/c<<endl;
            break;
            case 4:
             cout<<"Enter The 1st Number:";
            cin>>b;
            cout<<"Enter The 2nd Number:";
            cin>>c;
            cout<<"The Multiplication is:"<<b*c<<endl;
            break;
            default:
            cout<<"----Wrong Input----";
        }
        cout<<"Do You Want To Continue(Y/N)?";
        cin>>x;
        if(x =='Y')
        goto level;
        else
        return 0;
    }