/*Two pointers is an easy and effective technique that is typically used for searching pairs in a sorted array.*/
/* Used in Sorted Array*/

#include <bits/stdc++.h>
using namespace std;

int val1, val2;
int index1,index2;

bool solve(int a[], int n, int item)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int sum = a[i] + a[j];
        if (sum == item)
        {
            val1 = a[i], val2 = a[j];
            index1 = i, index2 = j;
            return true;
        }

        if (sum > item)
            j--;

        else if (sum < item)
            i++;
    }

    return false;
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

    if (solve(a, n, item) == true)
    {
        cout << "YES" << endl;
        cout<<"Pair : "<<val1<<' '<<val2<<endl;
        cout<<"Index : "<<index1<<' '<<index2<<endl;
    }
        
    else
        cout << "NO" << endl;

    return 0;
}