#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        char key;
        cin >> key;
        int flag = 0;

        for(int i = 0; i < s.length(); i++)
        {

            if(s[i] == key)
            {
                if(i-1 % 2 != 0 && (s.length() - i) % 2 != 0)
                {
                    cout << "YES" << endl;
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 0)
            cout << "NO" << endl;
    }
}