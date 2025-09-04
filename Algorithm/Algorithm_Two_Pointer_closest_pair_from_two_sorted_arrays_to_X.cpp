#include <bits/stdc++.h>  
using namespace std;

int index1, index2;

void solve(int a[],int n,int b[] ,int m, int item)  // O(n)
{
    int i = 0, j = n - 1;
    int min_dif  = INT_MAX;
    while (i<n && j>-1)
    {
        int sum = a[i] + b[j];
        int diff = abs(item - sum);
        if (diff < min_dif)
        {
            index1 = i, index2 = j;
            min_dif = diff;
        }

        if (sum == item)
            return;
        if (sum > item)
            j--;
        else
            i++;
    }

    cout<<a[index1]<<' '<<a[index2]<<endl;
    cout<<"Sum = "<<a[index1]+a[index2]<<endl;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i)cin >> a[i];
    

    int m;
    cin >> m;
    int b[m];

    for (int i = 0; i < m; ++i)cin >> b[i];
    

    sort(a, a + n);
    sort(b, b + m);
    int item;
    cin >> item;

    solve(a,n,b,m,item);


    return 0;
}