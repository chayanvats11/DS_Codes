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
        int freq[26];
        memset(freq, 0, sizeof(freq));

        for(int i = 0; i < n; i++)
        {

            freq[str[i] - 'a']++;
        }

        vector<int>new_freq;   
        for(int i = 0; i < n; i++)
        {
            if(freq[str[i] - 'a'] != 0)
            {
                new_freq.push_back(freq[str[i] - 'a']);
                freq[str[i] - 'a'] = 0;
            }  
        }

        int cnt = 0;
        for(int i = 0; i < new_freq.size(); i++)
        {
            cout << new_freq[i] << " ";
            // if(new_freq[i] % 2 != 0)
            //     cnt++;
        }

        cout << cnt << endl;

    }
}