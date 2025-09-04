#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    string s1=string(10,'A');
    cout << s1 << endl; 
    cout << s1.length() << endl;

    string s;
    getline(cin, s); 
    cout << s << endl;
    cout << s.length() << endl;

    s.push_back(' ');
    s.push_back('C');
    s.push_back('O');
    s.push_back('O');
    s.push_back('L');


    cout << s << endl; 
    cout << s.length() << endl;

    cout<<s.substr(0,4)<<endl; // 0 হতে index 4 এর আগ পর্যন্ত


    string::iterator it1;

    string::reverse_iterator it2;

    for (it1 = s.begin(); it1 != s.end(); it1++)
    {
        cout << *it1 << " ";
    }
    cout << endl;

     for (it2 = s.rbegin(); it2 != s.rend(); it2++)
    {
        cout << *it2 << " ";
    }
    cout << endl;

    string str = "Bangladesh";
    string str2 = "Arab";
    str.swap(str2);
    cout << str << endl;  // Arab
    cout << str2 << endl; // Bangladesh


    vector<string> a = {"Blue", "Red", "Yellow", "Orange"};
    
    a.push_back("Yellow");
 
  // Print Strings stored in Vector
   for (int i = 0; i < a.size(); i++)
   {
        cout << a[i] << "\n";
   }

   


    return 0;
}