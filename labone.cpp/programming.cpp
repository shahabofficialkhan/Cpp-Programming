#include <iostream>

using namespace std;

int main(){
cout<<"this is me Muhmmad Shahab"<<endl;
cout<<"I am a student of BS Software Engineering"<<endl;
cout<<"I am in  first semester"<<endl;
//i am reveiwing my lab work
// today i learn about relational operators
// i learn about if else statement
/*< > <= >=  different types of signs how the used in our programming 
lets try it and also learn about % mode reminder it have  alots of application*/
int a=0,b=0,c=0;
cout<<"enter first number"<<endl;
cin>>a;
cout<<"enter second number"<<endl;
cin>>b;
cout<<"enter third number"<<endl;
cin>>c;

int sum=a+b+c;
int sub=a-b-c;
int mul=a*b*c;
int dev=a/b;
int ave=(a+b+c)/3;
cout << "sum of three numbers is: " << sum << endl;
cout << "subtraction of three numbers is: " << sub << endl;
cout << "multiplication of three numbers is: " << mul << endl;
cout << "a divided by b is: " << dev << endl;
cout << "average of three numbers is: " << ave << endl;
if(a>b&a>c){
          cout<<"largest number is: "<<a<<endl;
}
else if(b>a&b>c){
          cout<<"largest number is :"<<b<<endl;
}
else if (c>a&c>b)
          cout<<"largest number is ;"<<c;
//smllest number 
if(a<b&a<b)
          cout<<"smallest number is :"<<a<<endl;

else if (b<a&b<c)
          cout <<"Smallest number is :"<<b<<endl;

else if (c<a&c<b)
          cout<<"smallest number is :"<<c<<endl;
//even or odd
if(a%2==0)
         cout<<"number is even"<<endl;

else 
         cout<<"number is odd"<<endl;
         
                  return 0;
}