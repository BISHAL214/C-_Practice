#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"------BEFORE SWAP-----"<<endl;
    cout<<"Enter The Value of a:";
    cin>>a;
    cout<<"Enter The Value of b:";
    cin>>b;

    //a = a + b;
    //b = a - b;
    //a = a - b;

    a = a * b;
    b = a / b;
    a = a / b;

    cout<<"-----AFTER SWAP-----"<<endl;
    cout<<"The Value of a:"<<a<<endl;
    cout<<"The Value of b:"<<b<<endl;
    return 0;
}