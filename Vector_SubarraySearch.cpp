#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr = {20,11,23,90,43,31,54};
    
    int needle[] = {23,90,43};
    vector<int>::iterator it = search(arr.begin(),arr.end(),needle,needle+3);

    if(it != arr.end())
        cout << "Subarray found from " << it - arr.begin() << endl;
    else
        cout << "Subarray NOT found" << endl;

}