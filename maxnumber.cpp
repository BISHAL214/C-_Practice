#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter The Value of a:";
    cin>>a;
    cout<<"Enter The Value of b:";
    cin>>b;
    cout<<"Enter The Value of c:";
    cin>>c;
    
    if((a>=b) && (a>=c)){
        cout<<"The Largest Number is:"<<a;
    }
    else if((b>=a) && (b>=c)){
        cout<<"The Largest Number is:"<<b;
    }
    else{
        cout<<"The Largest Number is:"<<c;
    }
  
    return 0;
}