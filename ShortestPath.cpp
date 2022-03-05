#include<bits/stdc++.h>
using namespace std;

int main()
{
    char route[1000];
    cin.getline(route,1000);
    int x = 0;
    int y = 0;

    for(int i = 0; route[i] != '\0'; i++)
    {
        switch(route[i])
        {
            case 'N': y++;
                break;
            case 'S': y--;
                break;
            case 'E': x++;
                break;
            case 'W': x--;
                break;
        }
    }

    cout << "Final Coordinates : " << x << "," << y << endl; 
        
    if(x >= 0 and y >= 0)
    {
        cout << "1st Quadrant : " << endl;
        while(y--)
            cout << "N";
        while(x--)
            cout << "E";
    }

    if(x <= 0 and y >= 0)
    {
        cout << "2nd Quadrant : " << endl;
        while(y--)
            cout << "N";
        while(x++)
            cout << "W";
    }

    if(x <= 0 and y <= 0)
    {
        cout << "3rd Quadrant : " << endl;
        while(y++)
            cout << "W";
        while(x++)
            cout << "S";
    }

    if(x >= 0 and y <= 0)
    {
        cout << "4th Quadrant : " << endl;
        while(y++)
            cout << "S";
        while(x--)
            cout << "E";
    }
}