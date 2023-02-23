#include<iostream>
#include<string>
using namespace std;

int main()
{
    struct SIT{
        int roll;
        string name;
    };
    SIT student[5];
    SIT teachers[3];
    cout<<"Enter The Details Of The Students:"<<endl;
    for(int i=0;i<5;i++){
        cout<<"Roll("<<i+1<<"):"<<endl;
        cin>>student[i].roll;
        cout<<"Name("<<i+1<<"):"<<endl;
        getline(cin>>ws,student[i].name);
    }
    cout<<"The Student Details Are:"<<endl;
    cout<<"Roll          Name"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<i<<student[i].roll<<" ";
        cout<<"          "<< student[i].name << "\n";
    }
    return 0;
}