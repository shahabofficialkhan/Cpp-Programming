   #include <iostream>
   #include  <iomanip>
   using namespace std;

   int main () {
    int num = 2;
    int *ptr = &num;
    cout << "Value of num: " << num <<endl;
    int sum = num + *ptr;
    num = sum - *ptr ;
     return 0;
   }