   #include <iostream>
   #include <iomanip>
   using namespace std;
   int   fiboncci (int r , int a , int b , int rang){
          
          if (r == 0){
                    cout << r << " ";
                    cout << " 1  "<< " 1  ";
                    a = 1;
                    b = 1;
          }
           r = a + b ;
          a = b ;
          b = r ;
          cout << r  << "    ";
          if (r >= rang){
                    return 1;
          }
          fiboncci (r , a , b , rang);
  return 0 ; 
}
   int main () {
          int a  , b , rang;
          cout << "Enter the rang of the fiboncci sequence : ";
          cin >> rang;
          int r= 0 ;
          fiboncci (r , a , b , rang);
           return 0;
          }
  