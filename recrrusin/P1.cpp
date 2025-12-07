#include <iostream>
#include  <iomanip>
using namespace std;
int  factorial(int n){
       if (n==0){
                 return 1;
       }
       return n*factorial(n-1);

}
int main () {
       int n ;
       cout << "We are going to find the factorial of a number "<<endl;
       cout << "Enter the number \t ";
       cin >> n ;
        factorial (n);
       cout << "the factorial of the number is \t "<< factorial(n)<<endl;
        return 0;
}