   #include <iostream>
   #include  <iomanip>
   #include <vector>
   using namespace std;

   int main () {
          vector<char> v(5);
          cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4];
          cout << "The vector contains: ";
          for (t val : v) {
              cout << val << " ";
          }
          cout << endl;
           return 0;
   }