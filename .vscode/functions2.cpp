#include<iostream>
using namespace std;
void sum(int a,int b);
int square(int c);

int main()
{
    int d;
    int e;
    int f;
    cout<<"------------- WELCOME TO THE WORLD OF C++ ------------"<<endl;
    cout<<"Enter The 1st Number:";
    cin>>d;
    cout<<"Enter The 2nd Number:";
    cin>>e;
    cout<<"Enter The Number That You Want To Make Square:";
    cin>>f;
    sum(d,e);
    square(f);
    return 0;
}
void sum(int a,int b)
{
    cout<<"The Sum Of The 2 Number Is:"<<a+b<<endl;
}
int square(int c)
{
    cout<<"The Square Of The Number Is:"<<c*c<<endl;
}