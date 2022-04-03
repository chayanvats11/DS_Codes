#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int temp = 1;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        int sum = 0,j = 1;
        sort(arr,arr+n);
        for(int i = 0; i < n; i++)
        {
            if(arr[i] >= j and (arr[i] >= 4 and arr[i] <= 20))
            {
                sum++;
                j++;
            }
        }
        
        cout << "Case #" << temp << ": " << sum << endl;
        temp++;
    }
}