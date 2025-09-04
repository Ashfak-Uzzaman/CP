#include <bits/stdc++.h>
using namespace std;

int index1, index2;
void solve(int a[], int n, int item)
{
    int i = 0, j = n - 1;
    int mindf = INT_MAX;
    while (i < j)
    {
        int sum = a[i] + a[j];
        int diff = abs(item - sum);
        if (diff < mindf)
        {
            index1 = i, index2 = j;
            mindf = diff;
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

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int item;
    cin >> item;

    solve(a,n,item);


    return 0;
}