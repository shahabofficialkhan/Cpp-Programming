#include <iostream>
using namespace std;
int main () {
    int total=0,marks,a;
for (a=0;a<6;a++)
 {  cout <<"please enter your number "<<endl;
    cin>>marks;
    total=total+marks;}
    int average=total/6;
    cout<<"You scored "<<total<<" marks out of 60"<<endl;
    cout<<"the Average of your marks is "<<average<<endl;

      return 0;}