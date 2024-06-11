#include <bits/stdc++.h>
int floorSqrt(int n)
{
    // Write your code here.
    int low = 1;
    int high = n;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long val = mid * mid;
        if (val <= (long long)(n))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}
