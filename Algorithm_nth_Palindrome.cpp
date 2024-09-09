/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
#include <bits/stdc++.h>
using namespace std;
const int Max = 1e6+7;

vector<int>palindrome;

int main()
{
    for(int i=1;i<=Max;++i)
    {
        int n=i;
        int p=0;


        while(n!=0)
        {
            p=p*10+n%10;
            n=n/10;
        }

        if(p==i)
        {
            palindrome.push_back(i);
        }


    }

    int n;
    cout<<"Enter n (max n = 1999): ";
    cin>>n;

    cout<<palindrome[n-1]<<endl;
    

    return 0;
}
