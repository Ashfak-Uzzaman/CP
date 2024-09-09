#include <bits/stdc++.h>
using namespace std;

void permute(char *a, int l, int r)
{ // post
    int i;
    if (l == r)
    {
        cout << a << " halo" << endl;
        return;
    }
    else
    {
        for (i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l + 1, r);
            swap(a[l], a[i]); // backtrack
        }
        cout << a << endl;
    }
    // cout<<a<<endl;
}

int main()
{
    char str[] = "ABCD";
    int n = strlen(str);
    permute(str, 0, n - 1);
    return 0;
}