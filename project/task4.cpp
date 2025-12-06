  #include <iostream>
  using namespace std ;
     
     int  main (){
          int len1;

          cout << "Enter size of first array "<<endl;
          cin >> len1;

          int array1[len1];
          for (int i =0 ; i < len1 ; i ++)
          {
                    cout <<i+1<< "Enter number of the first array"<<endl;
                    cin >> array1[i];
          }
          int len2;

          cout << "Enter size of Second array "<<endl;
          cin >> len2;

          int array2[len2];
          for (int x =0 ; x < len2 ; x ++)
          {
                    cout <<x +1 << "Enter number of the second array"<<endl;
                    cin >> array2[x];
          } 
          int len3=0;
          
                    for (int i =0 ; i <len1;i++)
               {      
                    int comp1=array1[i];
                 

                     for (int x=0 ; x < len2 ; x++)
                              {
                               int comp2=array2[x] ;    
                      
                              if (comp1==comp2)  
                              {
                                  len3++;
                               }
                              else ;
                              }
 
                   

               }      int array3[len3]; 
               for (int i =0 ; i <len1 ; i++)
               {      
                    int comp1=array1[i];
                 

                     for (int x=0 ; x < len2 ; x++)
                              { 
                               int comp2=array2[x] ; 

                               if (comp1 == comp2 )  
                               {  array3[x]=comp1; 
                               
                                }

                              }       } 

                            //  cout << "the length of the array3 is"<< len3<<endl;
                              //cout << array3[0] <<endl << array3[1];
                    cout << "The intersection is = {";
                    for (int x=0; x <len3 ; x++)
                    {  
                              cout << array3[x];
                              if (x>=0 && x <len3-1){
                                   cout << ",";
                              }
                       }
                       cout << "}"<<endl;
          return 0;
     }