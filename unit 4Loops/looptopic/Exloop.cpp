#include <iostream>

using namespace std;

int main (){
//we are practicing the question 

int gallon,miles,a,a1,a2,a3,average;
     cout<<"Enter gallon used"<<endl;
     cin>>gallon;

     cout<<"enter miles drivens"<<endl;
     cin>>miles;

a=miles/gallon;   
   cout <<"the miles per gallon ofr this tank was \n";
   cout << a;


   cout<<"Enter gallon used"<<endl;
   cin>>gallon;

   cout<<"enter miles drivens"<<endl;
   cin>>miles;

a1=miles/gallon;   
 cout <<"the miles per gallon ofr this tank was \n";
 cout << a1;


 cout<<"Enter gallon used"<<endl;
 cin>>gallon;

 cout<<"enter miles drivens"<<endl;
 cin>>miles;

a2=miles/gallon;   
cout <<"the miles per gallon ofr this tank was \n";
cout << a2;


cout<<"Enter gallon used"<<endl;
cin>>gallon;

cout<<"enter miles drivens"<<endl;
cin>>miles;

a3=miles/gallon;   
cout <<"the miles per gallon ofr this tank was "<<endl;
cout << a3;

average=a+a1+a2+a3;

cout<<"the  overeall miles per gallon of the tanks were" << average;
          return 0;
}