#include <iostream>
using namespace std;
void printArray(int myArray[][x], int n  ) {
          for (int i = 0; i < n; ++i){
          for ( int j =0 ; j < x ; j ++){
                    cin >> myArray[i][j];
    cout << endl;
          }}
      }
int main() {
          int n , x;
          cout << "Enter the number of elements in the row: ";
          cin >> n ;
          cout << "Enter the elements of the column : ";
          cin >> x;
          int myArray[n][x]; 
    
    printArray(myArray[][x], n );
    for(int i = 0; i < n; ++i)
    { 
          for (int j =0 ; j < x ; j ++){ cout << myArray[i] << " ";
          
    }cout << endl;}
             
    return 0;
}
