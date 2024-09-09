#include <bits/stdc++.h>            /* Prefix-sum Algorithm */
using namespace std;

/*          sum[i,j] = sum[0,j] -  sum[0,i-1]          
        =>  sum(i,j) = sum[j]   -  sum[i-1]
if i==0 :   sum(0,j) = sum[j]

        ara [ 5 ] = {5, 4, 8, 3, 7}
        indx i থেকে j পর্যন্ত sum = sum(inx 0 to j) - sum(inx 0 to i-1)              */

int main()
{
    int n, i, j;
    cin >> n;
    int a[n];

    int sum = 0;
    for (i = 0; i < n; i++)     
    {
        cin >> a[i];
        sum += a[i];
        a[i] = sum;
    }

    cout << "Please enter indices i & j for Sum(i,j): ";
    cin >> i >> j;

    if (i == 0)
    {
        cout << "Sum = " << a[j] << endl;
    }
    else
    {
        cout << "Sum = " << a[j] - a[i - 1] << endl;
    }

    return 0;
}




