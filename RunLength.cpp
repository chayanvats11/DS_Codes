#include<bits/stdc++.h>
using namespace std;

string compressString(string str)
{
    int n = str.length();
    string output,temp;

    for(int i = 0; i < n; i++)
    {
        int cnt = 1;

        while(i < n - 1 and str[i+1] == str[i])
        {
            cnt++;
            i++;
        }
        output += str[i];
        stringstream ss;
        ss << cnt;
        ss >> temp;
        output += temp;
    }

    if(output.length() > str.length())
        return str;
    return output;
}
int main()
{
    string s1 = "aaaabbbccddd";
    cout << compressString(s1) << endl;

    string s2 = "abcd";
    cout << compressString(s2) << endl;
}