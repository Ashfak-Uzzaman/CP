#include <iostream>
#include <string> // str1.replace(position,length,newstr);
using namespace std;
int main()
{
    string str1 = "This is Python language";
    string str2 = "C++";
    cout << str1 << '\n';
    str1.replace(8, 6, str2);   // 8th index থেকে শুরু করে 6 টা সরাও আর str2 বসাও 
    cout << str1 << '\n';
    return 0;
}


/* Time complexity : Unspecified, but generally up to linear in the new string length.
https://cplusplus.com/reference/string/string/replace/

*/

/* std::string::replace function has a linear time complexity, O(N), where N is the length of the resulting string 
after the replacement. 

The std::string::replace function replaces a portion of the string with a new substring, and it involves copying the 
characters of the replacement substring into the target string. This operation requires iterating over the characters 
of the replacement substring and copying them into the target string.

--chatgpt

*/