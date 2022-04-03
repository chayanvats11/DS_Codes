#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int temp = 1;
    while(t--)
    {
        int r,c;
        cin >> r >> c;
        cout << "Case #" << temp << ":" << endl;
        int j = 0;
        for(int i = 0; i< (2*r) + 1; i++)
        {
            j = 0;
            if(i == 0 or i == 1)
            {
                cout << "..";
                j = 2;
            }
            for(j; j < (2*c)+1; j++)
            {
                if(i % 2 == 0 and j % 2 == 0)
                    cout << "+";
                else if(i % 2 == 0 and j % 2 != 0)
                    cout << "-";
                else if(i % 2 != 0 and j % 2 == 0)
                    cout << "|";
                else
                    cout << ".";
            }

            cout << endl;
        }

        temp++;
    }
}
