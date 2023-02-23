#include<iostream>
using namespace std;
void sum(int a,int b);
int main()
{
    int c;
    int d;
    cout<<"Enter The 1st Number:";
    cin>>c;
    cout<<"Enter The 2nd Number:";
    cin>>d;
    sum(c,d);
    return 0;
}
void sum(int a,int b)
{
    cout<<"The Sum Is:"<<a+b;
}