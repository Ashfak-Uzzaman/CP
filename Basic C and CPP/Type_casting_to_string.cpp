#include<iostream>
#include<string>
using namespace std;

int main()
{
    
       
    // Converting float to string
    string str1 = to_string(12.10);
 
    // Converting integer to string
    string str2 = to_string(9999);
   
    // Converting integer to string by taking a variable
    int var1=16;
    string str3 = to_string(var1);
 
    // Printing the strings
    cout << str1 << '\n';
    cout << str2 << '\n';
    cout << str3 << '\n';




    return 0;
}


/*
string to_string (int val);
string to_string (long val);
string to_string (long long val);
string to_string (unsigned val);
string to_string (unsigned long val);
string to_string (unsigned long long val);
string to_string (float val);
string to_string (double val);
string to_string (long double val);

*/