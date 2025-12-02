#include <iostream>
using namespace std;
void cubeOne()

{ cout<<"we are taking cube of the  first 20 number";
          for (int a=0;a<=10;a++) 
          {cout<<a<<"\t"<<a*a*a<<"\n";}              

}

void account() { 
          

          cout<<"\nthis is your ATM \n";
int currentbal=0,withdraw1=0,withdraw=0;      
  cout<<"Enter current balance";
  cin>>currentbal;
  cout<<"card limit";
  cin>>withdraw1;
  cout<<"enter amount withdraw\n"; 
  cin>>withdraw;
if (withdraw<withdraw1&&withdraw>0) {
  cout<<"you can withdraw"<<endl;}
else if(withdraw>withdraw1)
 cout<<"you can't withdrwa money";
}
void salaryTax()
{
          int a=0,b,c;
cout<<"We are finding the tax on your";
cout<<"Enter tatol amount";
cin>>a;






}
int main(){ cout<<"number\tcube\n";
cubeOne();
account();
salaryTax();






          return 0;
}