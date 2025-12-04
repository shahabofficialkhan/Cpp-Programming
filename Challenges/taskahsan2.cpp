#include <iostream>
using namespace std;

int main  () {
       //We are amking diagram 
int x=1,n,b=x ;
cout << "enter number"<<endl;
cin >> n;
       for (int x=1 ;x<=n ; x++ )
           {  for (int b =1; b<=x; b++) 
                 {cout<<" ";} 
              for (int a =n ; a>=(2*x-1); a--)
                 {cout << "*";}
                 cout<<"\n";}
       return 0;}
       