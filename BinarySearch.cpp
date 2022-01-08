#include<bits/stdc++.h>
using namespace std;

int bin_ser(int arr[],int n,int key)
{
    int s = 0;
    int e = n - 1;
    int mid;

    while(s <= e)
    {
        mid = (s + e) / 2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }

    return -1;
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

    int key;
    cin >> key;

    int index = bin_ser(arr,n,key);
    if(index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element NOT Found";
}