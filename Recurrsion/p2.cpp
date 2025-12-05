   #include <iostream>
   #include  <iomanip>
   using namespace std;
    int fact (int i){
          if (i < 2){
                    return 1;
          }
          return i *fact(i-1);
}
   int main () {
          int fac= 1 ;
          int i ;
          cout << " enter the number";
          cin >> i; 
          // for (  int x =1 ; x <= i   ; x++) {
          //           fact = fact * x ;
          // } 
          // cout << "fact" << fact <<endl;
               cout << "factorial of " << i << " is =" <<   fact(i)<<endl;
           return 0;
   }