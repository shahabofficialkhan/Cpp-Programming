#include <iostream>
using namespace std ;
  
       int main ()
       {  // int star[100]={1,2,3,4,5,5,5,2,3,4,4,2,4,3,2,2,3,4,5,1,1,2,3,4,5,5,5,2,3,4,4,2,4,3,2,2,3,4,5,1,1,2,3,4,5,5,5,2,3,4,4,2,4,3,2,2,3,4,5,1,1,2,3,4,5,5,5,2,3,4,4,2,4,3,2,2,3,4,5,1,1,2,3,4,5,5,5,2,3,4,4,2,4,3,2,2,3,4,5,1};
       int star [5]={1,2,3,4,5};
       int count=0;
       int count1 =0;
       int count2 =0;
       int count3 =0;
       int count4 =0;
       int count5 =0;
         cout << "this is my app star program"<<endl;     
 
            for (int i =0 ; i<05; i++ )
            {      int star[i];

                    switch (star[i])
                    {
                    case 1:
                             { count1++;
                             break;}
                  
                     case 2:
                             { count2++;
                             break;}        
                     case 3:
                             { count3++;
                              break;  }           
                     case 4:
                            { count4++;
                              break;  }  
                     case 5:
                            { count5++;
                              break;}
                     default:
                  {  count++;
                    break;
                    }

          }                 

  }          
  cout << "the number of 1 star is ==" <<count1<<endl;
  cout << "the number of 2 star is ==" <<count2<<endl;
  cout << "the number of 3 star is ==" <<count3<<endl;
  cout << "the number of 4 star is ==" <<count4<<endl;
  cout << "the number of 5 star is ==" <<count5<<endl;

                 return 0;
       }