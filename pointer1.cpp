#include<iostream>
using namespace std;
int main()
{
    int *ptr,a,**ptrl;
    cin>>a;
    ptr=&a;ptrl=&ptr;
    cout<<a<<endl<<&a<<endl;
    cout<<ptr<<endl<<*ptr;
    cout<<ptrl<<*ptrl<<**ptrl;
    return 0;
}