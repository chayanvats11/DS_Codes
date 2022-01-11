#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x)
{
    int n = arr.size();

    int s = 0;
    int e = n-1;
    
    int a,b;

    int ans = arr[0] + arr[n-1];
    while(s <= e)
    {
        int res = max(ans, arr[s] + arr[e]);

        if(res == x)
        {
            ans = max(ans,res);
            a = s;
            b = e;
        }
        if(res > x)
            e -= 1;
        else if(res < x)
            s += 1;  
        else
            break;
    }

    return make_pair(arr[a],arr[b]);
}