#include <iostream>
using namespace std;

// Mid = L + (R - l) / 2

int Binary_Search(int L, int R, int target, int a[])  // log(n)
{
    int Mid;
    while (L <= R)
    {
        Mid = L + (R - L) / 2;
        if (a[Mid] == target)
            return Mid;
        else if (a[Mid] < target)
            L = Mid + 1;
        else
            R = Mid - 1;
    }
    return -1;
}


int BINARY_SEARCH(int L, int R, int target, int a[])  // log(n)
{
    int Mid=L+(R-L)/2;
    if(a[Mid]==target)return Mid;
    if(L>R)return -1;
    if(a[Mid]<target)L=Mid+1;
    else R=Mid-1;
    return BINARY_SEARCH(L,R,target,a);

}
// 156, 3, 5, 7, 19, 35, 140 ,47 83,72, 97, 137



int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int target;
    cin >> target;
    int Index = BINARY_SEARCH(0, n - 1, target, a);

    (Index == -1) ? cout << "Not  Found\n" : cout << "Found at index " << Index << '\n';

    return 0;
}