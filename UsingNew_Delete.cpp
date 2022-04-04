#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //Dynamic Array
    int *arr = new int [n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = i;
        cout << arr[i] << " ";
    }

    //Delete
    delete [] arr;
    return 0;
}