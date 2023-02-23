#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<< "Enter The No. Of Rows:";
    cin>>rows;

    for(int i = 1;i <= rows;i++)
    {
        for(int j = 1;j <= rows;j++)
        {
            if(j <= i){
                cout<<j;
            }
            else{
                cout<< " ";
            }
        }
        for(int j = rows;j >= 1;j--)
        {
            if(j <= i){
                cout<<j;
            }
            else{
                cout<< " ";
            }
        }
        cout<< endl;
    }
    return 0;
}