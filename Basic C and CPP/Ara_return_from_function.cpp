#include <bits/stdc++.h>
using namespace std;


int *ara()
{
    static int a[10];
    for (int i = 0; i < 10; ++i)
    {
        a[i] = i + 1;
    }

    return a;
}

int main()
{
    
    int *p = ara();

    for (int i = 0; i < 10; ++i)
    {
        cout << *p << ' ';
        p++;
    }
    cout << endl;

    p = ara();

    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}