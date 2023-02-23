#include<iostream>
using namespace std;
class sum
{

    public:
    int x,y,z;
    void add()
    {
        cout<<"Enter The Two Numbers:";
        cin>>x>>y;
        z = x + y;
        cout<<"Sum Of Two Number Is:"<<z<<endl;
    }
};

int main()
{
    sum sm;
    sm.add();
    cout<<sm.z;
    return 0;
}