/*                              https://codeforces.com/blog/entry/18169
#### WHAT IS BITMASKS ?

Bitmasks a.k.a. lightweight, small sets of Booleans (native support in C/C++/Java). An integer is stored
in a computer’s memory as a sequence/string of bits. Thus, we can use integers to represent a
lightweight small set of Boolean values. All set operations then involve only the bitwise
manipulation of the corresponding integer, which makes it a much more efficient choice when compared with the C++
STL vector, bitset, or set options. Such speed is important in competitive programming.

We know an integer is just a bunch of bits stringed together. The 1st bit will represent whether the
1st object is picked, the 2nd bit will represent whether the 2nd object is picked or not, etc. For
example, suppose in a set of 5 objects, we have picked the 1st , 3rd , and 4th object. The bitmask to
represent this in binary is 01101 or 13 in decimal (in the notes, the 1st bit will always be the least
significant bit and will always appear at the very right).

*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*
        3. (set the jth bit from 0 to 1) Add the jth object to the subset :
         use the bitwise OR operation A |= (1 << j).

         For example:
         A = 34 (base 10) = 100010 (base 2)
         j = 3, 1 << j    = 001000 <- bit ‘1’ is shifted to the left 3 times
                            -------- OR (true if either of the bits is true)
         A = 42 (base 10) = 101010 (base 2) // update A to this new value 42           */

    int x = 0; // 00000000000000000000000000000000
    // 1 << 3           // 00000000000000000000000000001000
    x = x | (1 << 3); // 00000000000000000000000000001000  == 1000 == 8
    cout << x << endl;

    /*
        4. (set the jth bit from 1 to 0) Remove the jth object from the subset :
         use the bitwise AND operation A &= ∼(1 << j).

         For example:
         A = 42 (base 10) = 101010 (base 2)
         j = 1, ~(1 << j) = 111101 <- ‘~’ is the bitwise NOT operation
                            -------- AND
         A = 40 (base 10) = 101000 (base 2) // update A to this new value 40                */

    x = 42; // 00000000000000000000000000101010
    // ~(1<<3)             // 11111111111111111111111111110111
    x = x & (~(1 << 3)); //   00000000000000000000000000100010 == 100010 == 34
    cout << x << endl;

    /*
        5. (check whether jth bit is 1) Check whether the jth object is in the subset :
        use the bitwise AND operation T = A & (1 << j).
        If T = 0, then the j-th item of the set is off.
        If T != 0 (to be precise, T = (1 << j)), then the j-th item of the set is on.

        For example:
        A = 42 (base 10) = 101010 (base 2)
        j = 3, 1 << j    = 001000 <- bit ‘1’ is shifted to the left 3 times
                          -------- AND (only true if both bits are true)
        T = 8 (base 10)  = 001000 (base 2) -> not zero, the 3rd item is on                  */

    x = 42; // 00000000000000000000000000101010
    // 1<<3             //    00000000000000000000000000001000
    x = x & (1 << 3); //    00000000000000000000000000001000 == 1000 == 8 != 0
    cout << x << endl;

    /*
    6. To flip or toggle the j-th item of the set:
   use the bitwise XOR operation A ∧ = (1 << j).

   For example:
   A = 40 (base 10) = 101000 (base 2)
   j = 2, (1 << j)  = 000100 <- bit ‘1’ is shifted to the left 2 times
                    -------- XOR <- true if both bits are different
   A = 44 (base 10) = 101100 (base 2) // update A to this new value 44
   j = 2, (1 << j) =  000100
                    -------- XOR <- true if both bits are different
   A = 40 (base 10) = 101000 (base 2)                                                       */

    x = 40; // 00000000000000000000000000101000
    // 1 << 2            // 00000000000000000000000000000100
    x = x ^ (1 << 2); // 00000000000000000000000000101100

    /*
        7.least significant bit that is on (first from the right):
       use T = (A & (-A)).

       For example:
        A =  40 (base 10) = 000...000101000 (32 bits, base 2)
       -A = -40 (base 10) = 111...111011000 (two’s complement)
                            ----------------- AND
        T =   8 (base 10) = 000...000001000 (3rd bit from right is on)          */

    x = 40;
    int T = log2(x & (-x));
    cout << T << endl; // T = 8 ; log2(8) = 3; So 3rd bit is on
                       /*
                           9. Get lowest set bit of a number:
                               lowest set bit = log2(A & -A);                                              */
                       /*
                           10. Get Highest set bit of a number:
                               Highest set bit = log2(A);                                              */

    /*
        10. To turn on (1) all bits in a set of size n: (be careful with overflows)
        use A = (1 << n) - 1 ;                                                      */

    ///////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////

    /******************************************************************************************************************/

    /* These are four important built-in functions in GCC compiler:                  */

    //  __builtin_popcount(x)   :  Count of 1s in binary of x
    int n = 5; // 101
    cout << __builtin_popcount(n) << '\n';

    /*  __builtin_parity(x)     :  This function is used to check the parity  (odd or even number of 1-bits)
                                   of a number. This function returns true(1) if the number has odd parity else it
                                   returns false(0) for even parity.                */
    n = 7; // 111
    cout << __builtin_parity(n) << '\n';

    // __builtin_clz(x)         :  count leading zero’s.

    // Time complexity : O(log2(n)) Auxiliary Space: O(1)

    /*     a = 16
           Binary form of 16 is 00000000 00000000 00000000 00010000
           Output: 27                                                           */
    n = 16;
    cout << __builtin_clz(n) << '\n';

    // __builtin_ctz(x) : count trailing zero’s.

    /*     a = 16
           Binary form of 16 is 00000000 00000000 00000000 00010000
           Output: 27                                                           */

    n = 16;
    cout << __builtin_ctz(n) << '\n';

    cout << (1 << __builtin_ctz(12)) << '\n'; // 12 == 1100 ;  2^2 = 4

    int num = 33; // 100001

    //  Print Binary:
    int Binary_Length = (num) ? (floor(log2(num)) + 1) : 1; // as log(0) == undefined
    cout << Binary_Length << endl;

    //  Print Binary:
    int Binary_Length = (num) ? (floor(log2(num)) + 1) : 1;
    for (int i = Binary_Length - 1; i > -1; --i)
    {
        if (num & (1 << i))
            cout << '1';
        else
            cout << '0';
    }

    return 0;
}

/**/
/**/
/*
You have  m sets of fruits. Each set has n fruits. You have to find the commonn fruits from these sets.
You have given a 2D array 'A' of fruits. Each fruit namedin integer more precisely 0<= A[i][j] <= 10^5 where 0<=i<=m; 0<=j<=n .
Find the common fruits.
*/
/*
#include <bits/stdc++.h>
using namespace std;


void solve()
{
  bitset<100007> b1;
  bitset<100007> ans;

  int m, n, item;
  cin >> m >> n;
  // int a[m][n];
  for (int i = 0; i < n; ++i)
  {
      cin >> item;
      b1[item] = 1;
  }

  ans = b1;

  for (int i = 1; i < m; ++i)
  {
      b1.reset();
      for (int i = 0; i < n; ++i)
      {
          cin >> item;
          b1[item] = 1;
      }
      ans = ans & b1;
  }

  for (int i = 0; i < 100007; ++i)
  {
      if (ans[i])
      {
          cout << i << " ";
      }
  }
  cout << '\n';
}

int main()
{
  int t;
  cin >> t;
  while (t--)
      solve();

  return 0;
}
*/

/*
You have three sets of fruits. You have to find the commonn fruits from these sets.
You have given three array of fruits. fruits are             */
/*
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll; //  %lld
// const long long mod = 1000000007;


void solve()
{
    bitset<100007> b1;
    bitset<100007> b2;
    bitset<100007> b3;

    int n;
    cin>>n;
    int a[3][n];
    for(int i=0;i<n;++i)
    {
        cin>>a[0][i];
        b1[a[0][i]]=1;
    }
    for(int i=0;i<n;++i)
    {
        cin>>a[1][i];
        b2[a[1][i]]=1;
    }
    for(int i=0;i<n;++i)
    {
        cin>>a[2][i];
        b3[a[2][i]]=1;
    }

    bitset<100007> ans;

    ans= b1 & b2 & b3;

    for(int i=0;i<100007;++i)
    {
        if(ans[i])
        {
            cout<<i<<" ";
        }
    }
    cout<<'\n';

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
*/
