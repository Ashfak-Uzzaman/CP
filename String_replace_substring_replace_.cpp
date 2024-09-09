#include <iostream>
#include <string>
using namespace std;

/*   String_name.replace(start_index, যতটি_char_তুলে_ফেলব, replacment);   */

/*   String_name.replace(start_index, number_of_replaced_char, replacment);   */

int main()
{
    string str = "Hello, World!";
    string substring = "World";
    string replacement = "Universe";

    cout << str << endl;
    cout << "Length: " << str.length() << endl;

    // Replace the substring "World" with "Universe"
    str.replace(7, 5, replacement);       // str.replace(7, 0, replacement); /* 0 টি char str থেকে তুলবে */
    cout << str << endl;
    cout << "Length: " << str.length() << endl;

    ////////////////////////////////////

    string name = "Ashfak Chowdhury!";
    string title = "Chowdhury";
    string nick_name = "Apurbo";

    cout << name << endl;
    cout << "Length: " << name.length() << endl;

    // Replace the title "Chowdhury" with "Apurbo"
    name.replace(7, title.length(), nick_name);
    cout << name << endl;
    cout << "Length: " << name.length() << endl;

    return 0;
}