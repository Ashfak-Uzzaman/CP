#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "hatti";
    string b = a + a;
    cout << b << "\n"; // hattihatti
    b[5] = 'v';
    cout << b << "\n"; // hattivatti
    string c = b.substr(3, 4);  // idx 3 হতে আরও 4 টা
    cout << c << "\n"; // tiva

    b=a;
    cout << b << "\n";

    b = a + a;
    cout << b << "\n";

    b+=a;
    cout << b << "\n";

    b+="Tiger";
    cout << b << "\n";



    string str = "0123456";  //Hello World!

    cout << "Before erase : ";
    cout << str << "\nlength: " << str.length()<<endl;

    // Deletes 3 characters from index number 1.
    str.erase(1, 3);   // std:: লাগবে নাহ when we don't use namespace std

    cout << "After erase : ";
    cout << str << "\nlength: " << str.length()<<endl;
    cout<<str[0]<<" "<<str[1]<<" "<<str[2]<<" "<<str[3]<<" "<<str[4];




/*   String_name.replace(start_index, যতটি_char_তুলে_ফেলব, replacment);   */

    string str = "Hello, World!";
    string substring = "World";
    string replacement = "Universe";

    cout << str << endl;
    cout << "Length: " << str.length() << endl;

    // Replace the substring "World" with "Universe"
    str.replace(7, 5, replacement);      // str.replace(7, 0, replacement); /* 0 টি char str থেকে তুলবে */
    cout << str << endl;
    cout << "Length: " << str.length() << endl;


    


    return 0;
}




