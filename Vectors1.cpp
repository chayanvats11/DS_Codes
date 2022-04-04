#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {10,3,40,51,88};
    
    //Initialization using Fill Constructor
    vector<int> visited(10,0);
    for(int i = 0; i < visited.size(); i++)
    {
        cout << visited[i] << endl;
    }

    //Pop_Back
    arr.pop_back();

    //Push_Back --> 0(1)
    arr.push_back(11);
    arr.push_back(21);

    //Size of the vector(Number of elements)
    cout << arr.size() << endl;

    //Capacity of the vector
    cout << arr.capacity() << endl;

    //For printing elements
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}