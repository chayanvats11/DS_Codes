#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b)
{
    return a < b; // For sorting in ascending order
    //return a > b ---> For sorting in descending order

}

int main()
{
    int arr[] = {10,9,8,7,20,11,15,18};
    int n = sizeof(arr)/sizeof(int);

    sort(arr,arr + n,compare);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}