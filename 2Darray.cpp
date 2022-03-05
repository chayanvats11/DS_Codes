#include<bits/stdc++.h>
using namespace std;

void print(int n,int m,int arr[][100]) //Pass by Reference that is copy of original array is sent
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        
        cout << endl;
    }
}

int main()
{
    int arr[1000][100];

    int n,m;
    cin >> n >> m;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    print(n,m,arr);
}