#include <iostream>
using namespace std;

int main () {

          int largest = 0;
          int i,number;
          
          for( i=0; i<=5; i++){
                    cin>>number;
                    if(number>largest)
                    largest=number;
          }
          cout<<largest;
}