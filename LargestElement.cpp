#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr)
{
    int large = arr[0];
    int n = arr.size();
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > large)
            large  = arr[i];
    }
    
    return large;
}