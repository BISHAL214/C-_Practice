#include<iostream>
using namespace std;
int main()
{
    int rows,cols;

    cout<<"Enter The Rows Of The Rectangle:";   
    cin>>rows;
    cout<<"Enter The Cols Of The Rectangle:";
    cin>>cols;

    cout<<"Rectangle Of Dimensions "<< rows << "*" << cols << endl;

    for(int i = 0;i < rows;i++){
        for(int j = 0;j < cols;j++){
            if(i == 0 || i == rows - 1 || j == 0 || j == cols -1){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}