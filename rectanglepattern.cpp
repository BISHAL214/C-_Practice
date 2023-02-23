#include<iostream>
using namespace std;
int main()
{
    int rows,cols;

    cout<<"Enter The Rows Of Rectangle:";
    cin>>rows;
    cout<<"Enter The Cols Of Rectangle:";
    cin>>cols;

    cout<<"Rectangle Of Dimesions "<< rows << "*" << cols << endl;

    for(int i = 0;i < rows;i++){
        for(int j = 0;j < cols;j++){
            cout<< "* ";
        }
        cout<<endl;
    }
    return 0;
}