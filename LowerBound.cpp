#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int val)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int res = -1;

    while(s <= e)
    {
        int mid = (s + e)/2;
        if(arr[mid] > val)
            e = mid - 1;
        else
        {
            res = arr[mid];
            s = mid + 1;
        }
    }

    return res;
}