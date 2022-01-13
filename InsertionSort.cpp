#include<bits/stdc++.h>
using namespace std;

int insertion_sort(int arr[],int n)
{
    for(int i = 1; i < n; i++)
    {
        int current = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }

        arr[prev + 1] = current;

    }
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

    insertion_sort(arr,n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

