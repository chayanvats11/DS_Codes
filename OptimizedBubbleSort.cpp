#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v)
{
    int n = v.size();
    int flag = 0;
    for(int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for(int j = 0; j < n - i - 1; j++)
        {
            if(v[j] > v[j+1])
            {
                swap(v[j],v[j+1]);
                flag = 1;
            }
        }

        if(flag == 0)
            break;
    }

    return v;
}