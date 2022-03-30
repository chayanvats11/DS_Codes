#include<bits/stdc++.h>
using namespace std;

void spriralprint(int arr[0][10],int n,int m)
{
    int srow = 0;
    int erow = n-1;
    int scol = 0;
    int ecol = m-1;

    //Outer Loop for Traversing array boundary
    while(scol <= ecol and srow <= erow)
    {
        //Start Row
        for(int col = scol;col <= ecol; col++)
        {
            cout << arr[srow][col] << " ";
        }

        //End Column
        for(int row = srow+1; row <= erow; row++)
        {
            cout << arr[row][ecol] << " ";
        }

        //End Row
        for(int col = ecol-1; col >= scol; col--)
        {
            if(srow == erow) //Avoid duplicate printing of elements in case the number of rows is less than number of columns and row converges first
                break;
            cout << arr[erow][col] << " ";
        }

        //Start Column
        for(int row = erow-1;row >= srow+1; row--)
        {   
            if(scol == ecol) //Avoid duplicate printing of elements in case when start column  = end column -> we have already printed in going from top to bottom columnwise above so No need to print again from going bottom to top
                break;
            cout << arr[row][scol] << " ";
        }

        //update variable for spiral move
        srow++;
        erow--;
        scol++;
        ecol--;
    }
}

int main()
{
    int arr[][10] = {{1,2,3,4},{12,13,14,5},{11,16,15,6},{10,9,8,7}};
    int n = 4,m = 4;

    spriralprint(arr,n,m);
    
}