#include<bits/stdc++.h>
using namespace std;

// Time Complexity of O(n)

int sub_arrsum3(int arr[],int n)
{
    int csum = 0;
    int largest = 0;

    for(int i = 0; i < n; i++)
    {
        csum = csum + arr[i];
        if(csum < 0)
        {
            csum = 0;
        }

        largest = max(csum,largest);
    }

    return largest;
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

    int ans = sub_arrsum3(arr,n);
    cout << ans;
}