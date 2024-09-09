/*https://www.programiz.com/cpp-programming/strings*/
#include<iostream>
using namespace std;

int main()
{
    // Declaring a string object
    string Str;
    cout << "Enter a string: ";
    getline(cin, Str);

    cout << "You entered: " << Str << endl;
    
    // Characterwise string
    char str1[4] = "C++";
    cout <<str1<< endl;

    char str2[] = {'C','+','+','\0'};
    cout <<str2<< endl;

    char str3[4] = {'C','+','+','\0'};
    cout <<str3<< endl;
    
    char str4[100] = "C++";
    cout <<str4<< endl;

    char str5[] = "C++";
    cout <<str5<< endl;

    char s[100];
    cout << "Enter a string(sentence contains space): ";
    cin.get(s, 100);          

    cout << "You entered: " << s << endl;

    char str[100];

    cout << "Enter a string: ";
    cin >> str;                       /* এই cin>> space পেলে নিচে আবার কোনো input থাকলে
                                        সেখানে input নেয়া শুরু করে । */
    cout << "You entered: " << str << endl;

    cout << "\nEnter another string with space: ";
    cin >> str;                                       
    cout << "Output string: "<<str<<endl;

    

    return 0;
}

