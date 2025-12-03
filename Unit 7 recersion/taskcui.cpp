   #include <iostream>
   #include  <iomanip>
   using namespace std;

   int main () {

          int count=0 , num , postnum;
          cout << "Enter a number: "<<endl;
          cout << "Enter 0 for exit: "<<endl;
          while (true) {
                cin >> num;
            if ( postnum==0 ) {
                  // postnum=num;
                  continue ;
            } 
else        if (num > postnum ){
                  count++;
            }
            postnum=num;
            if (num==0)
            {
                  break;
            }
             }
           cout << " Count: " << count << endl;
           return 0;
          }