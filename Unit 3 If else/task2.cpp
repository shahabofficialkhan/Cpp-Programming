#include <iostream>
using namespace std;
int main()
{
    cout << "I am going to perform my lab task" << endl;
    int num1,num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
     int dev=num1/num2;
     int mdo=num1%num2;
          cout << "The division of the two numbers is: " << dev << endl;
          cout << "The modulus of the two numbers is: " << mdo << endl;
    return 0;
}