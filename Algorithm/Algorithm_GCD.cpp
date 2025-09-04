#include <iostream>
using namespace std;

int gcd(int a, int b)
{ // assuming a >= b
	while (true)
	{
		int remainder = a % b;
		if (remainder == 0)
		{
			return b;
		}
		a = b;		   // a takes the bigger side
		b = remainder; // b takes the smaller side
	}
}

int Gcd(int a, int b) // Recursively
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int GCD(int a, int b)  // Recursively with ternary operator
{
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	int a, b;
	cin >> a >> b;

	if (a < b)
		swap(a, b);

	int gcD = gcd(a, b);

	return 0;
}