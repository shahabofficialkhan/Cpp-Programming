   #include <iostream>
   using namespace std;

   int main ()   {

//we are going to make a calcutor 
//declear variable
          cout <<"Calculator"<<endl;
          
          int num1; 
          int num2;
          int sum, dev ,multi , ram , ave ;
//Gettinng input from user 
          cout << "Enter numb1 \n";
          cin>>num1;
         
          cout << "Enter numb2 \n";
          cin>>num2;
          sum=num1+num2;
          ram=num1%num2;
          multi=num1*num2;
          dev=num1/num2;
          ave = sum/2; 
          cout <<"the sum of two number is :"<<sum<<endl;
          cout <<"the multiplication of two number is :"<<multi<<endl;
          cout <<"the dev or quotient  of two number is :"<< dev<<endl;
          cout <<"the Raminder of two number is :"<< ram<<endl;
          cout <<"the average of two number is :"<< ave <<endl;  
          return 0;
   }

