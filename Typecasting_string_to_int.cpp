
// C++ program to demonstrate working of stoi()
// Work only if compiler supports C++11 or above
// Because STOI() was added in C++ after 2011
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "45";
    string str2 = "3.14159";
    string str3 = "31337geek";
    string str4 = "31337 geek";

    int myint1 = stoi(str1); // type of explicit type casting
    double myint2 = stoi(str2); // type of explicit type casting
    int myint3 = stoi(str3); // type of explicit type casting
    int myint4 = stoi(str4); // type of explicit type casting


    cout << myint1 << '\n';
    cout << myint2 << '\n';
    printf("%lf\n",myint2);
    cout << myint3 << '\n';
    cout << myint4 << '\n';

    return 0;
}