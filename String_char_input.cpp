/*                        cin.get(str, 100);         getline(cin, str1);           */
#include <iostream>
using namespace std;
int main()
{
    string str1;
    cout << "Enter a string: ";
    getline(cin, str1);  //see
    cout << "You entered: " << str1 << endl;

    char str[100];
    cout << "Enter a string: ";
    
    cin.get(str, 100);  //see // 99 টা নিবে। বাকি শেষেরটা null ('\0')

    cout << "You entered: " << str << endl;
     

    char Str[100];

    cout << "Enter a string(space is'nt allowed): ";
    cin >> Str;
    cout << "You entered: " << Str << endl;

    return 0;
}