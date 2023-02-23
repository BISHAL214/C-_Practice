#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<< "Enter The No. Of Rows:";
    cin>>rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = i; j < rows; j++)
        {
            cout<< " ";
        }
        for(int k = 1; k < (i*2); k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 4; i >= 1; i--)
    {
        for(int j = rows; j > i; j--)
        {
            cout<< " ";
        }
        for(int k = 1; k < (i*2); k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;   
}