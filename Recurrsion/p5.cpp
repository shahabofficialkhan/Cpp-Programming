   #include <iostream>
   #include  <iomanip>
   using namespace std;
    

   int stair (int n ){
    if (n <= 3){
        if (n ==3){
            return n+1;
                }
        return n;
    }
    int sum ;
    sum = stair(n-1) + stair(n-2) + stair(n-3);    
     return sum;    
    }
   int main () {
    int n;

    cout << "enter number";
    cin >> n;
    cout << stair (n);
         return 0;
   }