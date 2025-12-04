#include <iostream>
using namespace std;

   int main () 
     {  
       cout<<"...........WELCOME TO THE GUESSING GAME..........."<<endl;   
// how to generate a random number       
//variable declaration
       double innum, sum  , initial =0 ;
       int average ,gussnum;
       int num1 ;
       //level of the game
       cout << "Click 1 for  BASIC LEVEL"<<endl;
       cout << "Click 2 for  MIDDLE LEVEL"<<endl;
       cout << "Click 3 for  ADVANCE LEVEL"<<endl;     
       cin >> innum ;
        //if statement
        if (innum == 1)
              {
            cout << "Pleae Enter number less then 10 "<<endl;
            cin >> innum ;
            
             }
        else if (innum == 2)
        {
            cout << "Please Enter the  number less then 100: " << endl;
            cin >> innum ;
        }
        else if (innum == 3)
        {
            cout << "Enter the Any number : " << endl;
            cin >> innum ;
        }
        else if (innum < 3)
        {
            cout << "Please enter the Any number"<<endl;
        }
       
 //   loop
               for (int i = innum; i >= 1; i--)
               {
                   sum = initial + i;
                   initial = sum;

               }
               average = initial/innum;
//   cout << "The sum of the number is :" << average << endl ;
                   if (average%2==0)
                   {
                       gussnum = ((average+innum)/2) *(average/2);
                   }
                   else
                   {
                       gussnum =  ((average-innum)/2) * (average/2) + average + 1 + innum;
                   }
//   cout << "The Gussnumber is :" << gussnum  << endl ;

                 
                  do
                  {
// Guessing game  :comparing the number with the of tgussing number 

                    cout << "PLEASE GUESS THE NUMBER : " << endl;
                    cin >> num1 ;
                                 if (num1 == gussnum)                 
                             {
                                    cout<<"congraturation You guessed the number correct"<<endl;
                                    cout<<"Your number was : "<<gussnum<<endl;
                             }
                             else if (num1  < 0 )
                             {
                                    cout<<"Please enter the greater number then 0"<<endl;
                             }
                             else if(num1 > gussnum +5)
                             {
                                       cout<<"Your enter number is TOO HIGH"<<endl;
                             }
                             else if(num1 < gussnum - 5)
                             {
                                       cout<<"Your enter number is TOO LOW"<<endl;
                             }
                             else if (num1 <= gussnum +5 || num1 >= gussnum - 5)
                             {
                                       cout<<" TOO CLOSE BUDDY!!!!"<<endl;
                             }

                                else 
                                {
                                           cout<<"Wrong "<<endl;
                                }                
                        } while (num1 !=gussnum);
                  
       
           
return 0;  }
                   

   
