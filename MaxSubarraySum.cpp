#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> arr)
{
    int n = arr.size();
    int input;
    while(cin >> input)
    {
        arr.push_back(input);
    }

    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
            flag = 1;
    }

    int largest = 0;
    int csum = 0;
    if(flag == 1)
    {
        for(int i = 0; i < n; i++)
        {
            csum += arr[i];
            if(csum < 0)
                csum = 0;
            
            largest = max(largest,csum);
        }

        return largest;
    }

    else
    {
        largest = arr[0];
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > largest)
                largest = arr[i];
        }

        return largest;
    }
}