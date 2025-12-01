#include <iostream> 
using namespace std;
int main(){
int a=42139;
cout<<"the currency is :"<<a;

int b=a/5000;
int c=a%5000;
cout<<"\n5000 notes"<<b<<"("<<c<<")"<<endl;
cout<<"the currency is :"<<c;
cout<<"\1000 notes";
int d=c/1000;
int e=c%1000;
cout<<"\n1000 notes"<<d<<"("<<e<<")"<<endl;
int f=e/500;
int g=e%500;
cout<<"\n500 notes"<<f<<"("<<g<<")"<<endl;
cout<<"the currency is :"<<g;
cout<<"\n100 notes";
int h=g/100;
int i=g%100;
cout<<"\n100 notes"<<h<<"("<<i<<")"<<endl;
cout<<"\n20 notes";
 int j=i/20;
 int k=i%20;
 cout<<"\n20 notes"<<j<<"("<<k<<")"<<endl;
 cout<<"\n10 notes"; 
 int l=k/10;
 int m=k%10;
 cout<<"\n10 notes"<<l<<"("<<m<<")"<<endl;

}