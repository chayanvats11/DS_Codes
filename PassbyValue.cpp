#include<bits/stdc++.h>
using namespace std;

void applyTax(int income)
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
    // This value of income is NOT updated because the program has two copies of income variable,one in function and one in main therefore when we update the value of income
    // in function then it is not updated in main therefore we use pass by reference to avoid this where all copies of the variable is updated on updation
}
