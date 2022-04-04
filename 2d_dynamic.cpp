#include<bits/stdc++.h>
using namespace std;

int **create2Darray(int rows,int columns)
{
    int **arr = new int *[rows];

    //allocate memory for each row
    for(int i = 0; i < rows; i++)
    {
        arr[i] = new int [columns];
    }

    //initialize the array with increasing list of numbers
    int value = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            arr[i][j] = value;
            value++;
        }
    }

    return arr;
}

int main()
{
    int rows,columns;
    cin >> rows >> columns;

    int **arr = create2Darray(rows,columns);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

}