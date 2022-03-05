#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    getline(cin,s1);
    int temp1;
    int temp2 = s1.length() - 1;

    for(int i = s1.length()-1;i >= 0; i--)
    {
        if(s1[i] == ' ' || i == 0)
        {
            if(i == 0)
                temp1 = 0;
            else
                temp1 = i + 1;
            for(int j = temp1; j <= temp2; j++)
            {
                cout << s1[j];
            }

            temp2 = i - 1;
            cout << " ";
        }
    }
}