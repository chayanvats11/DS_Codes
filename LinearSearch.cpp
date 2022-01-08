#include<bits/stdc++.h>
using namespace std;

int lin_ser(int arr[],int n,int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
            break;
        }
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

    int index = lin_ser(arr,n,key);
    if(index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element NOT Found";
}