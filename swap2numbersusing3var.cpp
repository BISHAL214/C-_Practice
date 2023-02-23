#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    cout<<"Enter The Value of a:";
    cin>>a;
    cout<<"Enter The Value of b:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Now The Valur of a:"<<a<<endl;
    cout<<"Now The Value of b:"<<b<<endl;

    return 0;
}