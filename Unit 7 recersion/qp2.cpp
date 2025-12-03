   #include <iostream>
   #include  <iomanip>
   using namespace std;

   int main () {

          for (int i = 1; i <=1; i++) {
             {
                    for   (int a=1 ; a<=15 ; a++)  {
                              
                    {          if ((a>3 && a <=6) || ( a > 10 && a < 14)) 
                              cout << "*";
                     else 
                              cout << " ";
                    }}        cout << endl;
                    
                    for   (int a=1 ; a<=15 ; a++)
                    {         if ( ( a>=2 && a <=7)||(a >= 9 && a<=14)) 
                              {cout << "*";}
                     else 
                              {cout << " ";}
                    }
          
          }}  cout << endl ;
                 for (int x = 1; x <= 10; x++) {
                           for ( int c =1 ; c<x ; c++){
                                     cout << " ";
                           }
                    for( int d=15 ; d>= (2*x-1) ; d--)
                    {
                              cout << "*";
                    }     cout << endl;

                 }
           return 0;
   }      