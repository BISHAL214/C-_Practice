#include<iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    //int x;
    //cin>>x;
    //cout<<x<<endl<<x+5<<endl<<x-5<<endl<<x*5<<endl<<x/5<<endl;
    //string name;
    //getline(cin,name);
    //cout<<name;
    
    int n;
    int factorial=1;

    cout<<"Enter The Number"<<endl;
    cin>>n;

    if(n<0){
        cout<<"---ERROR---"<<endl;
    }
    else{
        for(int i=1; i<=n; i++){
            factorial *= i;
        }
        cout<<"Factorial Of "<<n<<" = "<<factorial;
    }
    return 0;
}