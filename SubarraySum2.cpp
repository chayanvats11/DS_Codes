#include<bits/stdc++.h>
using namespace std;

// Time Complexity of O(N^2)
int sub_arrsum2(int arr[],int n)
{
    int prefix[100] = {0};
    prefix[0] = arr[0];

    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }

    int largest_sum = 0;
    int sub_array_sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(i > 0)
                sub_array_sum = prefix[j] - prefix[i - 1];
            else
                sub_array_sum = prefix[j];
            largest_sum = max(largest_sum,sub_array_sum);
        }
    }
    return largest_sum;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = sub_arrsum2(arr,n);
    cout << ans;
}