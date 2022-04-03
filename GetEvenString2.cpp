#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;

        int n = str.length();
        vector<int>arr;
        int temp = 1;
        for(int i = 0; i < n - 1; i++)
        {
            if(str[i] == str[i+1] and i != n-2)
            {
                temp++;
            }
            if(str[i] == str[i+1] and i == n-2)
            {
                temp++;
                arr.push_back(temp);
            }
            else if(str[i] != str[i+1] and i != n-2)
            {
                arr.push_back(temp);
                temp = 1;
            }
            else if(str[i] != str[i+1] and i == n-2)
            {
                arr.push_back(temp);
                arr.push_back(1);
                temp = 1;
            }
        }

        for(int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }

    }
}