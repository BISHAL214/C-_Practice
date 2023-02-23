#include<iostream>
using namespace std;
int main()
{
    int rows;

    cout<<"Enter The Rows Of The Pattern:";
    cin>>rows;

    int counter = 1;

    for(int i = 0;i < rows;i++){
        for(int j = 0;j <= i;j++)
        {
            cout<<(counter++) << " ";
        }
        cout<<endl;
    }
    return 0;
}