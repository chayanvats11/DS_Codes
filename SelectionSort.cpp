#include<bits/stdc++.h>
using namespace std;

int SelectionSort(int arr[],int n)
{
    for(int pos = 0; pos < n - 1; pos++)
    {
        int current = arr[pos];
        int min_pos = pos;

        for(int j = pos; j < n; j++)
        {
            if(arr[j] < arr[min_pos])
                min_pos = j;
        }

        swap(arr[min_pos],arr[pos]);
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

    SelectionSort(arr,n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
