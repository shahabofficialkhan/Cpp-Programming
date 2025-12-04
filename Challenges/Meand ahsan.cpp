   #include <iostream>
   using namespace std;

      int main () 
      {  
          //variable declaration
          int innum, sum , initial ,average ,gussnum;
          
          //prompt message
          cout << "Enter the number : " << endl;
          cin >> innum ;

          //loop
                  for (int i = 0; i < innum; i++)
                  {
                      sum = sum + i;
                      initial = sum;

                  }
                  average = initial/innum;
                       
                      if (average%2==0)
                      {
                          gussnum = ((average*innum)/2) +(average/2);
                      }
                      else
                      {
                          gussnum =  ((average*innum)/2) +(average/2) - average + 1 + innum;
                      }
                      cout << "The sum of the number is :" << gussnum  << endl ;

      }
