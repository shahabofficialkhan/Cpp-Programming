    #include <iostream>
    using namespace std ;

         int main () {
          //delear variables
            int num1 , sum , initial = 0;

              //prompt message
                 cout << "Enter the number : " << endl;
                 cin >> num1 ;
                      //loop
             do {   
                    if (num1%2==0)
                    {                     sum = initial + num1;
                             initial = sum ;}

                    num1--;
             } while (num1 > 0) ;
                    cout << "The sum even number of the  is :" << initial  << endl ;
             }
         


