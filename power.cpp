#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int power;

    cout<<"Enter The Number:";
    cin>>n;
    cout<<"Enter The Power:";
    cin>>power;
    int result = pow(n,power); 
    cout<<"power Of n is:"<<result<<endl;
    return 0;
}