#include<iostream>
using namespace std;
int main()
{
    char a[5];
    int i;
    for(int j=0;j<5;j++){
        cout<<"Enter The Characters:";
        cin>>a[j];
    }
    for(i=0;i<5;i++){
        cout<<"Output Is:";
        cout<<endl<<(int)a[i]<<endl;
    }
    return 0;
}