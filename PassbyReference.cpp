#include<bits/stdc++.h>
using namespace std;

void applyTax(int &income)
{
    float tax = 0.10;
    income = income - income * tax;
}
int main()
{
    int income;
    cin >> income;

    applyTax(income);
    cout << income;
    //The variable income in main is updated even it is updated only in function because of & i.e pass by reference where the variable is updated by accessing it's address and not it's value
}
