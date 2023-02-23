#include<iostream>
#include<string>
using namespace std;
int main()
{
    struct SIT{
        int roll;
        string name;
    };
     SIT teacher;
    teacher.roll = 1;
    teacher.name = "Debojyoti Mishra";

    cout << teacher.roll << "\n";
    cout << teacher.name << "\n";
    return 0;
}