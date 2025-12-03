#include <iostream>
#include  <iomanip>
using namespace std;

int main() {
          int arr[ 3 ];
          cout << "Enter number";
          cin >> arr[ 0 ];
          cout << "Enter number";
          cin >> arr[ 1 ];
          cout << "Enter number";
          cin >> arr[ 2 ];

          if (arr[ 0 ] > arr[ 1 ] && arr[ 0 ] > arr[ 2 ])
                    {
                    cout << "the largest number is ==" << arr[ 0 ] << endl;

                    }
          else          if (arr[ 2 ] > arr[ 1 ] && arr[ 2 ] > arr[ 0 ])
                    {
                    cout << "the largest number is ==" << arr[ 2 ] << endl;
                    }
          else          if (arr[ 1 ] > arr[ 2 ] && arr[ 1 ] > arr[ 2 ])
                    {
                    cout << "the largest number is ==" << arr[ 1 ] << endl;
                    }


          return 0;
          }