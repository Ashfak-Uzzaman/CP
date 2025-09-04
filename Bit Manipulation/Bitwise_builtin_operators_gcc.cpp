#include <iostream>
using namespace std;
//These are four important built-in functions in GCC compiler
int main()
{
    //  __builtin_popcount(x)   :  Count of 1s in binary of x
    int n = 5;   // 101
    cout << __builtin_popcount(n) << '\n';

    /*  __builtin_parity(x)     :  This function is used to check the parity  (odd or even number of 1-bits)
                                   of a number. This function returns true(1) if the number has odd parity else it
                                   returns false(0) for even parity.                */
    n = 7;   // 111
    cout << __builtin_parity(n) << '\n';


    // __builtin_clz(x)         :  count leading zero’s. 
    
    // Time complexity : O(log2(n)) Auxiliary Space: O(1)

/*     a = 16
       Binary form of 16 is 00000000 00000000 00000000 00010000
       Output: 27                                                           */
    n = 16;
    cout<<__builtin_clz(n)<<'\n';

    // __builtin_ctz(x) : count trailing zero’s.

/*     a = 16
       Binary form of 16 is 00000000 00000000 00000000 00010000
       Output: 27                                                           */

    n=16;
    cout<<__builtin_ctz(n)<<'\n';

    puts("ello");
cout<<(1 << __builtin_ctz(12))<<'\n';
  


    return 0;
}
