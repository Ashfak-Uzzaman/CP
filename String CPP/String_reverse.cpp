#include<iostream>
#include <algorithm>     //  reverse(str.begin(), str.end());    >>time complexity is O(n)
#include<string>          
using namespace std; 
int main() 
{ 
    string str = "Journal Dev reverse example"; 
    cout<<str<<endl;

    reverse(str.begin(), str.end());   // O(n)

//  reverse(str.begin()+3, str.begin()+6);      // index 3 থেকে 6 এর আগ পর্যন্ত
	cout<<str; 

    return 0;
}

/*  You cannot reverse a string in O(1) time, however, you can do so with O(1) space complexity. 

-- stackoverflow */