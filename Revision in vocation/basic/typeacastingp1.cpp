   #include <iostream>
   #include  <iomanip>
   using namespace std;
   int sum(int x , int y){
    return x+y;
   }

   int main () {
     int x= 5;
     float y=22.2f;
     cout << "The Int is ="<< x << endl << "The float is = " << y <<endl; 
     cout << float ( sum(x ,  y))<<endl;
     cout << "type casting of the both types The Int is ="<< float(x) << endl << "The float is = " <<(int) y <<endl; 
    cout << sum(x ,  y)<<endl;
     cout <<endl;
     return 0;
   }