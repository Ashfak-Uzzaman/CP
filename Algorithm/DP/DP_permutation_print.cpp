
#include <bits/stdc++.h> // Time complexity O(n*n!)
using namespace std;


void Permute(char a[], int l, int r) // r = last index
{
    if (l == r)
        cout << a << endl;
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            Permute(a, l + 1, r);
            swap(a[l], a[i]); // backtrack
        }
    }
}



// For Repeating elements
void permute(char a[], int l, int r) // r = last index
{
    if (l == r)
        cout << a << endl;
    else
    {
        //set<int> Swapped;                 // you may use unordered_set also
        bool Swapped[26];
        memset(Swapped, false, 26);

        for (int i = l; i <= r; i++)
        {
            /*if(Swapped.find(a[i])!=Swapped.end())
                continue;
            Swapped.insert(a[i]); */

            if (Swapped[a[i] - 'A'])
                continue;

            Swapped[a[i] - 'A'] = 1;

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