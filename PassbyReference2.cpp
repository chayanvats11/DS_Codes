#include<bits/stdc++.h>
using namespace std;

void watchVideo(int *viewsPtr)
{
    *viewsPtr = *viewsPtr + 1;
}

int main()
{
    int views = 100;
    watchVideo(&views); // Here address of variable views is passed to function
    // In function pointer viewsPtr = address and pointer to address i.e *viewsPtr is actually *(&views) i.e actual value of views is updated

    cout << views;
}