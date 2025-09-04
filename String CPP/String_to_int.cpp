#include <iostream>
#include <string>     // stoi(string that will convert into int)
                     //stoll(string that will convert into long long int)
using namespace std;


int main()
{
    string aNumber = "625";
    int convNumber = stoi(aNumber);
    cout << "The given number is: " << convNumber << endl;
    cout << "given number +100 = " << convNumber + 100 << endl;

    string str = "1234567890123456789";
    long long num = stoll(str);

    cout << "The given long long number is : " << num << endl; // Output: 1234567890123456789
    cout << "given number +100 = " << num + 100 << endl;



    string s1 = "Geeks";
 //              01234
   
    string r = s1.substr(3, 2);  // ks
 
   
    cout << "String is: " << r;

    return 0;
}






/*
The stoi() and stoll() functions are part of the C++ standard library and are available in most modern C++ compilers that 
adhere to the C++11 standard or later.

However, it's important to note that these functions may not be available in older or non-standard-compliant compilers. 
If you're using an older compiler, you may need to use alternative methods or libraries for string-to-integer conversions.

If you're unsure about the availability of these functions in your specific compiler or environment, you can consult the 
documentation or check the compiler's version and standard compliance. It's generally recommended to use a modern and 
compliant C++ compiler to ensure access to the full range of standard library features.
*/