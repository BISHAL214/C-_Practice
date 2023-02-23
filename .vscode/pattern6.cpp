#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<< "Enter The No. Of Rows:";
    cin>>rows;

    for(int i = 0; i <= rows; i++)
    {
        for(int s = rows; s > i; s--)
        cout<< " ";
        for(int j = 0; j < i; j++)
        cout<< "* ";
        cout<<"\n";
    }
    for(int i = 1; i < rows; i++)
    {
        for(int s = 0; s < i; s++)
        cout<< " ";
        for(int j = rows; j < i; j--)
        cout<< "* ";
        cout<< "\n";
    }
    return 0;
}