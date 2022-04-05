#include<bits/stdc++.h>
using namespace std;

int main()
{
    //2D Vector
    vector<vector<int>>arr = {{1,2,3},{4,5,6},{7,8,9},{10,11}};

    //Updation
    arr[0][0] += 10;

    for(int i = 0; i < arr.size(); i++)
    {
        for(int number : arr[i])
        {
            cout << number << ",";
        }
        cout << endl;
    }
}