#include <iostream>             // First in First out
#include <queue>    // In all opoeration time complexity is O(1)
using namespace std;   // Queue does not have iterators


void showq(queue<int> nums) // এখানে pass by value হচ্ছে
{

    while (!nums.empty())
    {
        cout << nums.front() << " "; // সামনের টা print করছি,
        nums.pop();                  // সামনেরটাকেই pop করছি
    }
}



int main()
{
    queue<int> nums;

    // push element into the queue
    nums.push(1); // Front এ push করবে।
    nums.push(2);
    nums.push(3);
    nums.push(4);
    nums.push(5);
    nums.push(6);
    nums.push(7);
    nums.push(8);
    nums.push(9);

    int front = nums.front(); // first element  // get the element at the front
    cout << "First element: " << front << endl;

    int back = nums.back(); // last element     // get the element at the back
    cout << "Last element: " << back << endl;

    cout << "Size : " << nums.size() << endl;

    showq(nums);  // এখানে pass by value হবে। তাই Queue খালি হবে না।

    cout << "Size : " << nums.size() << endl;  // Size : 9


     while (!nums.empty())
    {
        cout << nums.front() << " "; // সামনের টা print করছি, মানে যেটা আগে ঢুকছে
        nums.pop();                  // সামনেরটাকেই pop করছি
    }

    cout << "Size : " << nums.size() << endl;  // Size : 0

    return 0;
}



/*
    Function	    Time Complexity	    Space Complexity

    q.push(x)	        O(1)                O(1)

    q.pop( )	        O(1)                O(1)

    q.front( )	        O(1)                O(1)

    q.back( )	        O(1)                O(1)

    q.size( )	        O(1)                O(1)



*/