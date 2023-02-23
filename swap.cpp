#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
    cout<<"--------During Swap---------"<<endl;
    cout<<"The Value Of x is:"<<*x<<endl;
    cout<<"The Value Of y is:"<<*y<<endl;
}
int main()
{
    int x,y;
    cout<<"Enter The Values:";
    cin>>x>>y;
    cout<<"--------Before Swap---------"<<endl;
    cout<<"The Value Of x is:"<<x<<endl;
    cout<<"The Value Of y is:"<<y<<endl;
    swap(&x,&y);
    cout<<"--------After Swap----------"<<endl;
    cout<<"The Value Of x is:"<<x<<endl;
    cout<<"The Value Of y is:"<<y<<endl;
    return 0;
}