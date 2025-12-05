   #include <iostream>
   #include  <iomanip>
   using namespace std;
   int fib (int n){
    if (n <= 2){
        if (n == 1)
        return 0;
        return 1;
    }
    return fib (n-1 )+ fib (n-2);
   }
   int main () {
    int num ;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << fib (num);
     return 0;
   }