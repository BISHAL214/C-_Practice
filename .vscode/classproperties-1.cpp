// C++ program to expalin
// Encapsulation

#include<iostream>
using namespace std;

class Encapsulation
{
    private:
    // data hidden from outside worls
    int x;
    public:
    // function to set value of
    // variable x
    int b = 5;
    void set(int a)
    {
        x =a;
    }
    
    // function to return value of 
    // variable x
    int get()
    {
        return x;
    }
};

// main function

int main()
{
    Encapsulation obj;
    
    obj.set(10);

    cout<<obj.get();
    // cout<<obj.x;
    cout<<obj.b;
    return 0;
}