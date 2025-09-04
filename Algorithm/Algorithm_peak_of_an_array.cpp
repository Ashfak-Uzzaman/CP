#include <bits/stdc++.h> //Peak element is defined as the element greater than both of its neighbors
using namespace std;     // a[i-1] < a[i] > a[i+1]
// Problem statement: https://leetcode.com/problems/find-peak-element/
/*
A peak element is an element that is strictly greater than its neighbors.
Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the
index to any of the peaks.
You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a
neighbor that is outside the array.
*/
int Peak(int a[], int n)
{
    int l = 0, r = n - 1;
    int peak, mid;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if ((mid == 0 or a[mid - 1] < a[mid]) and (mid == n - 1 or a[mid + 1] < a[mid]))
        {
            peak = mid;
            return peak;
        }
        if (mid > 0 and a[mid - 1] > a[mid])
        {
            r = mid - 1;
        }
        else if (mid < n - 1 and a[mid + 1] > a[mid])
        {
            l = mid + 1;
        }
    }
}

int main()
{
    int a[] = {156, 3, 5, 7, 19, 35, 140, 47, 83, 72, 97, 137};
    //int a[] = {6, 63};
    int n = sizeof(a) / sizeof(a[0]);
    int x = Peak(a, n);
    cout << x << '\n';

    return 0;
}