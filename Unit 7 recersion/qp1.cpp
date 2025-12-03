   #include <iostream>
   #include  <iomanip>
   using namespace std;
   int factroial(int n){
          if(n==0)
          return 1;
else return n*factroial(n-1);
   }

   int main () {
          // I am going to find the factroial of the number
          int n;
          cout << "Enter a number: ";
          cin >> n;
          cout << "Factorial of " << n << " is " << factroial(n);
           return 0;
   }