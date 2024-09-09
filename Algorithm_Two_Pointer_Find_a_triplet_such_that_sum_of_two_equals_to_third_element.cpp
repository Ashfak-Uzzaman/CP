#include <bits/stdc++.h>
using namespace std; 

void solve(int a[], int n) 
{
    bool found = false;
    for(int i=0;i<n;++i)
    {
        int item = a[i];
        int l=i+1,r=n-1;
        while(l<r)
        {
            if(a[l]+a[r]==item)
            {
                cout<<a[l]<<'+'<<a[r]<<'='<<a[i]<<endl;
                found=true;
            }
            if(a[l]+a[r]>item) r--;
            else l++;
        }
    }

    if(!found)cout<<"No Such Triplates exists\n";
   
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int item;
    cin >> item;

    solve(a, n);

    return 0;
}