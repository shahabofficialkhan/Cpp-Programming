#include <iostream>
using namespace std;

int main  () {
       //We are amking diagram 
int x=1,n,b=x ;
cout << "enter number";
cin >> n;
       for (int x=1 ;x<=n ; x++ )
           {  for (int b = x ; b<=n ; b++) 
                {cout<<" ";} 
              for (int a =1 ; a<=(2*x-1); a++)
                 {cout << "*";}
                 cout<<"\n";}
       return 0;}
       