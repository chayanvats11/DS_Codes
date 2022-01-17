#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    int n = length.size();
    
    //Sorting first to avoid elements repetition in any pair and we can skip elements easily
    sort(length.begin(),length.end());

    int cnt = 0;
    for(int i = 0; i < n; i++)
    { 
        if(length[i + 1] - length[i] <= D && i != n - 1)
        {
            cnt += 1;
            i += 1;
        }
    }

    return cnt;
}