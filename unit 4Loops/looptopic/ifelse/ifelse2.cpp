#include <iostream>
using namespace std;


int main (){
     cout<<"Grading Calculator\n ";

int marks=0;
     cout<<"Enter marks\n";
cin>>marks;
 
  if (marks>100)
       cout<<"invalid marks";

else if (marks>=90)
       cout<<"Your Grade is A+";

else if (marks>=80 && marks<90)
       cout<<"Your Grade is A";

else if (marks>=70 && marks<80)
       cout<<"Your Grade is B+";

else if (marks>=60 && marks<70)
       cout<<"Your Grade is B";

else if (marks>=50 && marks<60)
       cout<<"Your Grade is C";

else
       cout<<"fail";

  return 0;
}