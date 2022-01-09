#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> arr, int k)
{
    vector<int>arr2;
    int n = arr.size();
    int r = k % n;

    for(int i = n - r; i < n; i++)
    {
        arr2.push_back(arr[i]);
    }

    for(int i = 0; i < n - r; i++)
    {
        arr2.push_back(arr[i]);
    }

    return arr2;
}