#include<bits/stdc++.h>
using namespace std;

//Counting Sort is generally used where we know the range of data like 1 is smallest and 9 is largest etc
void counting_sort(int arr[],int n)
{
    int largest = -1;
    for(int i = 0; i < n; i++)
    {
        largest = max(largest,arr[i]);
    }  

    vector<int> freq(largest + 1,0);

    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int j = 0;
    for(int i = 0; i <= largest; i++)
    {
        while(freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }

    return;

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

    counting_sort(arr,n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}