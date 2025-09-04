				/*
					(a+b) % m = (a % m + b % m) % m
					(a-b) % m = (a % m - b % m) % m
					(a*b) % m = (a % m * b % m) % m    				*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;
	cin >> t;
	
	while (t--)
	{long long p;
		int n;
		cin >> n;
		long long i = 1, j = 1;
		long long s = 0;
		while (i < n)
		{
			j--;
			for (int l = 0; l < 2; l++)
			{
				j++;
			
				p=1;
				p=(p*i)%1000000007;
				p=(p*j)%1000000007;
				
				s += p;
				s=s%1000000007;
				
			}
			++i;
			
		}
	
		p=1;
		p=(p*i)%1000000007;
		p=(p*j)%1000000007;
		s += p;
		s=s%1000000007;
		cout << s << endl;
		cout << (s*2022)%1000000007 << endl;
		
	}
	return 0;
}



