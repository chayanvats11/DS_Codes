#include <bits/stdc++.h>
using namespace std;
int fib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}
int main() {
   int x , i=0;
   double time_spent = 0.0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   clock_t begin = clock();
   while(i < x) {
      cout << " " << fib(i);
      i++;
   }
   clock_t end = clock();
   time_spent += (double)(end - begin)/CLOCKS_PER_SEC;
   cout << endl << time_spent;
   return 0;
}