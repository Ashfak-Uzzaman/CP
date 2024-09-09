#include <iostream>  // std::cout
#include <algorithm> // std::rotate  //  rotate(a.begin(), a.begin() + 3,a.end());
#include <vector>    // std::vector
using namespace std;

int main()
{
    vector<int> a;

    // set some values:
    for (int i = 0; i < 10; ++i)
        a.push_back(i); 
    // 0 1 2 3 4 5 6 7 8 9

    rotate(a.begin(), a.begin() + 3,a.end()); // 3rd index থেকে rotate হবে
    // 3 4 5 6 7 8 9 0 1 2
    
    // print After  rotate:
    for(auto u:a)cout<<u<<' ';cout<<'\n';

    int ara[10];
    int n= sizeof(ara) / sizeof(int);  // n = 10;
    for(int i=0;i<n;++i)
        ara[i]=i;

    rotate(ara,ara+4,ara+n); // Index 4 থেকে rotate হবে
        
    for(auto u:ara)cout<<u<<' ';cout<<'\n';
   

    return 0;
}