#include<bits/stdc++.h> 
using namespace std; 
  
// A Method that returns multiple values using 
// tuple in C++. 
tuple<int, int, char> foo(int n1, int n2) 
{ 
    // Packing values to return a tuple 
    return make_tuple(n2, n1, 'a');              
} 
  

  
int main() 
{ 
    int a,b; 
    char cc; 
      
    // Unpack the elements returned by foo 
    tie(a, b, cc) = foo(5, 10);       
      
      
    cout << "Values returned by tuple: "; 
    cout << a << " " << b << " " << cc << endl; 
      

    return 0; 
} 