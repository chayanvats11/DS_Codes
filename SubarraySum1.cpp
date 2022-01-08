#include<bits/stdc++.h>
using namespace std;

// Time Complexity of O(N^3)

int sub_arrsum(int arr[],int n)
{
    int largest_sum = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int sub_array_sum = 0;
            for(int k = i; k <= j; k++)
            {
                sub_array_sum += arr[k];
            }

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

    int ans = sub_arrsum(arr,n);
    cout << ans;
}