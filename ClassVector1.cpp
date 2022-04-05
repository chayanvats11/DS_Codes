#include<bits/stdc++.h>
using namespace std;

class Vector{
    //Data Members
    int *arr;
    int cs;
    int ms;

    public:
        Vector(int max_size = 1)
        {
            cs = 0;
            ms = max_size;
            arr = new int[ms];
        }

        void push_back(const int d)
        {
            //Two cases 1 - When array is NOT FULL, 2 - When array is FULL
            if(cs == ms)
            {
                //create a new array and delete the old one,double the capacity
                int *oldArr = arr;
                ms = 2*ms;
                arr = new int[ms];

                //copy the elements from older array into the new array
                for(int i = 0; i < cs; i++)
                {
                    arr[i] = oldArr[i];
                }

                //delete the old array to avoid memory leak
                delete [] oldArr;
            }
            arr[cs] = d;
            cs++;
        }

        void pop_back()
        {
            if(cs > 0)
                cs--;
            
        }

        bool isEmpty()
        {
            return cs == 0;
        }

        //Front,Back,At(i),[]
        int front() const
        {
            return arr[0];
        }

        int back() const
        {
            return arr[cs-1];
        }

        int at(int i) const
        {
            return arr[i];
        }

        int size() const
        {
            return cs;
        }

        int capacity() const
        {
            return ms;
        }

        int operator[](const int i) const
        {
            return arr[i];
        }
};

int main()
{
    Vector vec(5);

    vec.push_back(10);
    vec.push_back(99);
    vec.push_back(23);
    vec.push_back(11);
    vec.push_back(3);
    vec.push_back(18);
    vec.push_back(45);

    vec.pop_back();

    cout << "Front : "<< vec.front() << endl;
    cout << "Back : "<< vec.back() << endl;

    cout << "At function : " << vec.at(3) << endl;

    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;

    for(int i = 0; i < vec.size(); i++)
    {
        //using operator overloading and NOT the at function
        cout << vec[i] << ",";
    }

}