#include <iostream>
using namespace std;
int main (){
   int a;
          cout << "Enter array size: ";
          cin >> a;
          int even=0 , odd=0;
          int arr[a];
          for (int i = 0; i < a; i++){
              cout << "Enter  " << i +1 << ": ";
              cin >> arr[i];
          }
          for (int i = 0; i < a; i++){
           if  (i % 2 == 0){
              even++;
           }
           else {
              odd++;
           }

          }
          cout << "total even: " << even << endl;
          cout << "total odd: " << odd << endl;
 return 0;}