#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str="It is bush"; 


    char last_char = str.back();

    cout << "Last character of string = "<< last_char << endl;

    // Appending a character to
    // the end of an empty string
    str.back() = '#';

    cout << "New string = " << str << endl;

    return 0;
}