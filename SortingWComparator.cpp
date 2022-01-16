#include<bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
    if(flag == true)
    {
        int n = a.size();
        int cnt = 0;
        for(int i = 0; i < n - 1; i++)
        {
            cnt = 0;
            for(int j = 0; j < n - i - 1; j++)
            {
                if(a[j] > a[j+1])
                {
                    swap(a[j],a[j+1]);
                    cnt = 1;
                }
            }

            if(cnt == 0)
                break;
        }

        return a;
    }
        
    else
    {
        int n = a.size();
        int cnt = 0;
        for(int i = 0; i < n - 1; i++)
        {
            cnt = 0;
            for(int j = 0; j < n - i - 1; j++)
            {
                if(a[j] < a[j+1])
                {
                    swap(a[j],a[j+1]);
                    cnt = 1;
                }
            }

            if(cnt == 0)
                break;
        }

        return a;
    }

}