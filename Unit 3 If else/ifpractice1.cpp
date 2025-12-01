#include <iostream> 
using namespace std;
int main(){
int a=0;
cin>>a;
cout<<"the currency is :"<<a;
int b=a/5000;
int c=a%5000;
cout<<"\n5000 notes"<<b<<"("<<c<<")"<<endl;
cout<<"the currency is :"<<c;
cout<<"\n1000 notes";
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
cout<<"the currency is :"<<i;
int k=i/50;
int l=i%50;
cout<<"\n50 notes"<<k<<"("<<l<<")"<<endl;
cout<<"the currency is :"<<l;
cout<<"\n20 notes";
int m=l/20;
int n=l%20;
cout<<"\n20 notes"<<m<<"("<<n<<")"<<endl;
cout<<"the currency is :"<<n;
int o=n/10;
int p=n%10;
cout<<"\n10 notes"<<o<<"("<<p<<")"<<endl;
return 0;

}