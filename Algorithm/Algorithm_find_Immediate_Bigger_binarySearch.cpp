#include <stdio.h>

int findImmediateBiggerIndex(int arr[], int n, int value)   // upper boundary
{
    int left = 0;
    int right = n - 1;
    int immediateBiggerIndex = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] > value)
        {
            immediateBiggerIndex = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return immediateBiggerIndex;
}

int findImmediateBiggerValue(int arr[], int n, int value)
{
    int left = 0;
    int right = n - 1;
    int immediateBiggerValue = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] > value)
        {
            immediateBiggerValue = arr[mid];
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return immediateBiggerValue;
}

int main()
{
    int arr[] = {5, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int value = 4;

    int result = findImmediateBiggerValue(arr, n, value);

    if (result == -1)
    {
        printf("No immediate bigger value found.\n");
    }
    else
    {
        printf("Immediate bigger value: %d\n", result);
    }

    int resultIndex = findImmediateBiggerIndex(arr, n, value);

    if (resultIndex == -1)
    {
        printf("No immediate bigger value found.\n");
    }
    else
    {
        printf("Immediate bigger value index: %d\n", resultIndex);
    }

    return 0;
}


// /*
// /*         ***BISMILLAHIRRAHMANIRRAHIM***       */
// #include <bits/stdc++.h>
// using namespace std;
// #define nl '\n'
// #define print(a)          \
// 	for (auto u : a)      \
// 		cout << u << ' '; \
// 	cout << '\n';
// #define Print(a)     \
// 	for (auto u : a) \
// 		cout << u.first << ' ' << u.second << '\n';
// #define Case(cs)                     \
// 	cout << "Case " << cs << ": \n"; \
// 	++cs
// typedef long long ll; //  %lld
// // const long long mod = 1000000007;
// // const int mx = 1e5 + 7;

// /*
// Break complex problems into smaller, more manageable parts.
// This makes it easier to develop a step-by-step plan for solving them.      */

// int Binary_Search(int a[], int item, int l, int r)
// {
// 	int mid;
// 	while (l <= r)
// 	{
// 		mid = l + (r - l) / 2;   // mid = (l + r) / 2
// 		if (a[mid] == item)
// 			return mid;
// 		if (a[mid] < item)
// 			l = mid + 1;
// 		else
// 			r = mid - 1;
// 	}
// 	return -1;
// }
// // 5 8 13 15 18 20

// int Upper_Bound(int a[], int item, int l, int r)
// {
// 	int mid;
// 	int upperbound = -1;
// 	while (l <= r)
// 	{
// 		mid = l + (r - l) / 2;
// 		if(a[])
// 	}
// }

// int main()
// {
// 	int n;
// 	cin >> n;
// 	int a[n];
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> a[i];
// 	}
// 	sort(a, a + n);
// 	print(a);
// 	int item;
// 	while (1)
// 	{
// 		cin >> item;
// 		cout << Binary_Search(a, item, 0, n - 1) << nl;
// 	}
// 	return 0;
// }
// */