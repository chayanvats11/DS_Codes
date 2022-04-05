#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr = {20,11,23,90,43,31,54};
    int key;
    cin >> key;

    vector<int>::iterator it = find(arr.begin(),arr.end(),key);
    //The end element is not included in arr.begin() to arr.end() but it can give the last element as found if it matches with key value

    if(it != arr.end())
        cout << "Present at Index " << it - arr.begin() << endl;
    else
        cout << "Element NOT found" << endl;

}