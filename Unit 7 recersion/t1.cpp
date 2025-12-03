#include <iostream>
#include  <iomanip>
#include <string>
using namespace std;
struct studentdata
          {
          int rollnumber;
          float salary;
          char name;
          };
union money
{
          int a;
          float b;
          char c;
};


int main() {
          //  union money shahab;
          // shahab.b=14.55;
          // shahab.a=123;
          // shahab.c='f';
          // cout << "the money is :"<<shahab.b<<endl;
          // cout << "the money is :"<<shahab.a <<endl;
          // cout << "the money is :"<<shahab.c <<endl;

          // shahab.c='f';
          // cout << "the money is :"<<shahab.b<<endl;
          // cout << "the money is :"<<shahab.a <<endl;
          // cout << "the money is :"<<shahab.c <<endl;

          // struct studentdata ahmad,fahad;
          // fahad.rollnumber = 020;
          // fahad.salary = 14678;
          // fahad.name = 'f';
          // ahmad.rollnumber = 190;
          // ahmad.salary = 1230;
          // ahmad.name = 'a';
          // // shahab.rollnumber = 191;
          // // shahab.name = 's';
          // // shahab.salary = 1230022;

          // cout << "The Roll number of shahab is :      " << fahad.rollnumber << endl;
          // cout << "The Special charator of shahab is:  " << fahad.name << endl;
          // cout << "The Salary of shahab is :           " << fahad.salary << endl;
          // cout << "The Roll number of shahab is :      " << ahmad.rollnumber << endl;
          // cout << "The Special charator of shahab is:  " << ahmad.name << endl;
          // cout << "The Salary of shahab is :           " << ahmad.salary << endl;
          // // cout << "The Roll number of shahab is :      " << shahab.rollnumber << endl;
          // // cout << "The Special charator of shahab is:  " << shahab.name << endl;
          // // cout << "The Salary of shahab is :           " << shahab.salary << endl;

          enum meal{breakfast ,lunch } ;
          meal m1=breakfast;
          meal m2=lunch;
          cout << "The meal : " << m1<< endl;
          cout << "The meal : " << m2<< endl;
            
          return 0;
          }