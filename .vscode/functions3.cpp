#include<iostream>
using namespace std;
void sum(int a,int b);
int square(int c);

int main()
{
    int p;
    int x;
    int y;
    int z;

    cout<<"---------- WELCOME TO WORLD OF C++ -----------"<<endl;
    cout<<"Enter Your Choice:-"<<endl<<"1.Addition Of The Numbers"<<endl<<"2.Square Of The Number"<<endl;
    cin>>p;

    switch(p)
    {
        case 1:
        cout<<"Enter The 1st Number:";
        cin>>x;
        cout<<"Enter The 2nd Number:";
        cin>>y;
        sum(x,y);
        break;
        case 2:
        cout<<"Enter The Number:";
        cin>>z;
        square(z);
        break;
        default:
        cout<<"---------WRONG INPUT----------"<<endl;
    }
    return 0;
}
void sum(int a,int b)
{
    cout<<"The Addition Of The Number is:"<<a+b<<endl;
}
int square(int c)
{
    cout<<"The Square Of The Number Is:"<<c*c<<endl;
}