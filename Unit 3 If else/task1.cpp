#include <iostream>
using namespace std;
int main (){
          cout << "Hi this is me Muhmmad Shahab \n this is my calculator in which you add, sub ,multiply and divid two number"<< endl;
          int firstnumber, secondnumber;
          cout << "Enter first number: ";
          cin >> firstnumber;
          cout <<"Enter the second number: ";
          cin>>secondnumber;
          int sum = firstnumber + secondnumber;
          int sub = firstnumber - secondnumber;
          int mul = firstnumber * secondnumber;
          int div = firstnumber / secondnumber;
          int mod = firstnumber % secondnumber;
              char operation;
            cout << "Enter operation (+, -, *, /, %): ";
            cin >> operation;
            switch(operation) {
                      case '+':
                                cout << "The sum of two numbers is: " << sum << endl;
                                break;
                      case '-':
                                cout << "The sub of two numbers is: " << sub << endl;
                                break;
                      case '*':
                                cout << "The mul of two numbers is: " << mul << endl;
                                break;
                      case '/':
                                if (secondnumber != 0)
                                          cout << "The div of two numbers is: " << div << endl;
                                else
                                          cout << "Error: Division by zero" << endl;
                                break;
                      case '%':
                                if (secondnumber != 0)
                                          cout << "The mod of two numbers is: " << mod << endl;
                                else
                                          cout << "Error: Division by zero" << endl;
                                break;
                      default:
                                cout << "Invalid operation" << endl;
            }




          return 0;
}