    #include <iostream>
    using namespace std;

          //product of two numbers
          int producttwo(int num1, int num2){
              return num1 * num2;
          }
          //product of three numbers
          int productthree(int num2, int num1, int num3){
              int sum= num1 * num2 * num3;
              return sum;
          }
      int main () {
             // Declear the variables
        int num1 , num2 , num3 ;
           //prompt message
           cout << "Enter the first number: "<<endl;
           cin >> num1;
           cout << "Enter the second number: "<<endl;
           cin >> num2;
           cout << "Enter the third number: "<<endl;
           cin >> num3;
         //output
           cout << "The product of the first two numbers is: " << producttwo(num1, num2) << endl;
           cout << "The product of the three numbers is: " << productthree(num1, num2, num3) << endl;


          return 0;

         }