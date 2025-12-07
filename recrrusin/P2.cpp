   #include <iostream>
   #include  <iomanip>
   using namespace std;
   int sum (int n){
          int sm =0 ;
          if (n==0){
                    return 0;
          }
          int r;
          r = n%10;
          n = n/10;
          return sm = r + sum (n);
   }
   int main () {
          // we are going to find out the Fibonacci sequence 
          int n ; 
          cout << " Plaese Enter the number  "<<endl;
          cin >> n;
          cout <<"the sum of the number of the digit  " << sum (n) <<endl;
           return 0;
   }