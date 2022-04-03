#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b;
        cin >> a >> b;
        int s;
        int flag = 0;
        if(a == 0)
            cout << 1 << endl;
        if(a != 0)
        {    
            s = (a * 1 + b * 2) + 1;
            flag = 1;
        }

        if(flag == 1)
            cout << s << endl;
    }

}