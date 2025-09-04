#include <iostream>
using namespace std;

bool is_Prime(int n)
{
    if (n < 2 || n % 2 == 0 && n != 2)
    {
        return false;
    }

    if (n <= 3)
    {
        return true;
    }

    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPrime(int num)
{
    if (num < 2)
        return false;
        
    if (num <= 3)
        return true;

    if (num % 2 == 0)
        return false;

    for (long long i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}


int main()
{

    int n;
    cin >> n;

    bool prime = isPrime(n);

    if (prime)
    {
        cout << n << " is prime.\n";
    }

    else
    {
        cout << n << " is not prime.\n";
    }

    return 0;
}

/*

The number 1 is neither prime nor composite. By definition, prime numbers are integers greater than 1 that have no
positive divisors other than 1 and themselves. Since 1 is not greater than 1, it does not meet this criterion.
Similarly, composite numbers are integers greater than 1 that can be formed by multiplying two smaller positive
integers. Since 1 cannot be formed by multiplying two smaller positive integers (other than 1 and itself),
it is not considered composite either. Instead, 1 is often referred to as a unit, as it behaves differently from
prime and composite numbers.


The number 0 is neither prime nor composite. By definition, prime numbers are integers greater than 1 that have no
positive divisors other than 1 and themselves. Since 0 is not greater than 1, it does not meet this criterion.
Additionally, composite numbers are integers greater than 1 that can be formed by multiplying two smaller positive
integers. Since 0 cannot be formed by multiplying two smaller positive integers, it is not considered composite
either.

In fact, 0 is a special case known as the "identity element" for addition. It represents the absence or lack of
quantity and has unique properties in mathematics, but it does not fall under the classification of prime or
composite numbers.

*/
