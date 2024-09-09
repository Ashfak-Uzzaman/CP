#include <cstdio>
using namespace std;

int n, o, a[200005];
// https://codeforces.com/contest/1849/problem/D
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; ++i)
    {
        if (i > 1 && a[i - 1])
            --a[i - 1];
        else if (a[i] == 0 && i < n && a[i + 1])
            --a[i + 1];
        else
            ++o;
    }
    printf("%d\n", o);
    return 0;
}