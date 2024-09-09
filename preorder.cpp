
#include <bits/stdc++.h>
using namespace std;


void permute(char *a, int l, int r)
{
    int i;
    cout << a << endl; // preorder
    if (l == r)
    {
        //cout << a << " halo" << endl;  //this is the permurtation // also a preorder node(leaf)
    }
    else
    {
        //cout << a << endl; // preorder
        for (i = l; i <= r; i++)
        {
            swap(a[l], a[i]);

            permute(a, l + 1, r);
            swap(a[l], a[i]); // backtrack
        }
    }
}


int main()
{
    char str[] = "ABCD";
    int n = strlen(str);
    permute(str, 0, n - 1);
    return 0;
}

