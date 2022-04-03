#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int flag = 0;
    
    int t = n;
    int rem = 0,temp = 0;
    int j = 0;
    int arr[4];

    if(n > 0)
    {
        while(t > 0)
        {
            rem = t % 10;
            if(rem == 9)
                temp = 0;
            else
                temp = rem+1;
            arr[j] = temp;
            t = t / 10;
            j++;
        }
    }
    else if(n < 0)
    {
        
    }
    else if(n == 0)
        cout << 1 << endl;

    if(flag == 0)
    {
        for(int i = j-1; i >= 0; i--)
        {
            cout << arr[i];
        }
    }
    else
    {
        if(j > 1)
            cout << -arr[j-1] << arr[j-2];
        else
            cout << -arr[j-1];
    }

    
}