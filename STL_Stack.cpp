#include <iostream> // First in Last out
#include <stack>    // Stack does not have iterators  // O(1) in all operation
#include <algorithm>
using namespace std;

void show_stack(stack<int> stk) // এখানে pass by value হচ্ছে
{

    while (!stk.empty())
    {
        cout << stk.top() << "\n"; // উপরেরটা print করছি,
        stk.pop();                 // উপরেরটাকেই pop করছি
    }

}

int main()
{
    stack<int> stk;
    stk.push(550);
    stk.push(100);
    stk.push(150);
    stk.push(250);

    cout << "size : " << stk.size() << endl;

    cout << stk.top() << endl;

    show_stack(stk);
    cout << "size : " << stk.size() << "\n\n";

    while (!stk.empty())
    {
        cout << stk.top() << "\n";
        stk.pop();
    }  
    cout << "size : " << stk.size() ;

    return 0;
}

/*

    Function	    Time Complexity	    Space Complexity

    s.top( )	        O(1)                O(1)

    s.pop( )	        O(1)                O(1)

    s.empty( ) 	        O(1)                O(1)

    s.push(x)	        O(1)                O(1)

    s.size( )	        O(1)                O(1)

*/