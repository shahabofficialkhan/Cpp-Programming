#include <iostream>
using namespace std;

int main ()  {
 int num1=42139 , d1 ,d2 ,d3 ,d4 ,ram ,d5;
        //We are taking input from user 
       cout<<"Enter number five digit number";
      cin>>num1;
      cout << num1<<endl;
       d1 = num1 / 10000;
       ram = num1 % 10000;
       d2 = ram / 1000;
       ram = ram % 1000;
       d3 = ram / 100;
       ram = ram % 100;
       d4 = ram / 10;
       d5 = ram % 10;
       cout<<d1<<"\t"<<d2<<"\t"<<d3<<"\t"<<d4<<"\t"<<d5<<"\t"<<endl;
          return 0;
}