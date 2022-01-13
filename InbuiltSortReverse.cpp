#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,9,8,7,20,11,15,18};
    int n = sizeof(arr)/sizeof(int);

    sort(arr,arr + n);
    reverse(arr,arr + n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}