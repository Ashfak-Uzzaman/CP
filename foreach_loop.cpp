/*
The foreach loop in C++ or more specifically, range-based for loop was introduced with the C++11. This type of for loop structure
eases the traversal over an iterable data set. It does this by eliminating the initialization process and traversing over each and
every element rather than an iterator.
*/
#include<iostream>
#include<vector>
using namespace std; 
int main() 
{ 
    int arr[]={1,2,3,4,5};   //array initialization
    cout<<"The elements are: ";
    for(int i : arr)
    {
    	cout<<i<<" ";
    }cout<<endl;

    vector<int> vec={11,22,33,44,55,66};
    cout<<"The elements are: ";
    for(auto var : vec)
    {
    	cout<<var<<" ";
	}
    return 0;
}