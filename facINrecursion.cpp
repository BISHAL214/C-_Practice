#include<iostream>
using namespace std;
int fact(int n);

int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}

int main()
{
    int n;
    cout<<"Enter A Positive Integer:";
    cin>>n;
    cout<<"Factorial Of "<< n <<" = "<<factorial(n);
    return 0;
}
