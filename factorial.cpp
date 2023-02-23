#include<iostream>
using namespace std;
int main()
{
    label:
    int i,f=1,r;    
    char c;
    cout<<"Enter Your Range:";
    cin>>r;
    for(i=1;i<=r;i++)
        f=f*i;
    cout<<f<<endl;
    cout<<"Do You Want To Continue?:(Y/N)"<<endl;
    cin>>c;
    if(c=='Y')
    goto label;
    return 0;
}