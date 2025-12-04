     #include <iostream>
     using namespace std;
     //addation function
       int addFunct (int copynum1, int copynum2)
       {   
       return copynum1+copynum2 ;
}  
     //Substraction Function
       int subFunct (int copynum1, int copynum2)
{     
       return copynum1-copynum2 ;}   

   //Multiplication Function
      int mulFunct (int copynum1, int copynum2)
      {    return copynum1*copynum2 ; }   

   //Division Function
      int devFunct (int copynum1, int copynum2)
   {  return copynum1/copynum2 ;
   }   
   //Ramder Function
      int ramFunct (int copynum1, int copynum2)
   {   
   
   return copynum1%copynum2 ;
   } 
     void decVar(){  for (int a =1 ; a <= 10000 ; a++)
          {           //       declear varible
          int num1;
          int num2;//for opration asking
          int num3;
          int sum,mul,sub,dev,ram;
   // Ask from user for operation
             //prompt message
                 cout << "Enter num1"<<endl;
                 cin >> num1;

                 cout << "Enter num2"<<endl;
                 cin >> num2;

                 cout <<"Click 1 for addation"<<endl;
                 cout <<"Click 2 for Subtraction"<<endl;
                 cout <<"Click 3 for Multiplication"<<endl;
                 cout <<"Click 4 for Divsion"<<endl;
                 cout <<"Click 5 for Ramainder"<<endl;
                 cin>>num3;
                  // According to user input call function
          switch (num3)
          {
          case 1:
                  { cout<<"the Addation of two number is =" <<addFunct(num1,num2)<<endl;
                    } break;
          case 2:
                  {cout<<"the Substraction of two number is =" <<subFunct(num1,num2)<<endl;
                    } break;
          case 3:
                 { cout<<"the Multipication of two number is =" <<mulFunct(num1,num2)<<endl;
                   } break;
          case 4:
                 { cout<<"the Division of two number is =" <<devFunct(num1,num2)<<endl;
                    } break;
          case 5:
                 {  cout<<"the Ramainder of two number is =" <<ramFunct(num1,num2)<<endl;
                    } break;
          default:            
                 {  cout << " invalid selection"<<endl;
                    }  break;
          }
          //
          int b;
          //prompt msg
             cout << "click 1 for again"<<endl;
             cout << "click anynumber for exit"<<endl;
             cin >> b;
          switch (b)
          {
          case 1:
                    a++;
                    break;
          default:
                   a=100000;
                  
                    break;
          }
                   cout << "thank you dear ";}
  }
  
     

      
       int main ()
  {     
          { decVar();}
        
          return 0;}
