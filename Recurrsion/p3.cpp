   #include <iostream>
   #include  <iomanip>
   using namespace std;  
  int  power(int a,int b){
    int i = 3;
    if (b==0){
        return 1;
    } 
     int p  = a*power (a,b-1);
   
    cout << i << "The power of  " << p  <<endl;
    i--;return p;
  }     
   int main () {
    int a , b ;
    cout << "enter number";
    cin >> a ;
    cout << "enter power";
    cin >> b ;
    int p = power(a,b);
    cout << "Power of "<< a << "Rasied to the power of "<< b << "is " << p;
     return 0 ;
    }