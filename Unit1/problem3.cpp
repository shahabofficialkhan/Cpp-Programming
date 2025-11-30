#include <iostream>
using namespace std ;

int main () {
 //We are writing a program which find the C & A & D of the circle by getting radius
 
     int rad,cum,area,dia;
//radius ( input from user )
     cout << "Enter radius of the Circle" <<endl;

     cin >>rad;

     cum=2*3*rad;
     area=3*rad*rad;
     dia=2*rad;

    cout << "The circumference of the circle is " << cum << endl;

    cout << "The diameter of the circle is " << dia << endl;

    cout << "The area of the circle is " << area << endl;

          return 0;
}