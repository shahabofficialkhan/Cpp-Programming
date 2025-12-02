#include <iostream>
using namespace std;

int main () {

          cout <<"We are finding the largest number in 10 inputs "<<endl;

          int number, largest2 = 0, largest = 0 , largest3 = 0;

          for (int a = 1; a <= 4 ; a++) {
                    cout << a << ") Enter number" << endl;
                    cin >> number;

                    if (number > largest) {
                            largest3 = largest2;
                            largest2 = largest;
                              largest = number;
                    } else if (number > largest2) {
                            largest3 = largest2;
                              largest2 = number;
                    } else if (number > largest3) {
                              largest3 = number;
                    }
          }
          cout << "Largest number: " << largest << endl;
          cout << "Second largest number: " << largest2 << endl;
          cout << "the third largest number: " << largest3 << endl;
          return 0;
}