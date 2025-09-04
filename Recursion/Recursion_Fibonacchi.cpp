/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
//      0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233
//indx: 0  1  2  3  4  5  6   7   8   9  10  11   12   13th
#include <bits/stdc++.h>
using namespace std;
/*

                          fib(5)   
                     /                \
               fib(4)                fib(3)   
             /        \              /       \ 
         fib(3)      fib(2)         fib(2)   fib(1)
        /    \       /    \        /      \
  fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
  /     \
fib(1) fib(0)

                                                                                            */
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    cin >> n;

    cout << fibo(n);

    return 0;
}
