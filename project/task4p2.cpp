   #include <iostream>
   using namespace std ;
     int array1function(int len1)
       {
          int array1[len1];
           
          // get values from user 
            
             for (int i =0 ; i < len1 ; i++)
                 {
                    cout << "Enter number "<< i +1 << "of the array1";
                    cin >> array1[i]; 
                 }  return ; 
       }
       int array2function(int len2)
       {
          int array2[len2];
           
          // get values from user 
            
             for (int i =0 ; i < len2 ; i++)
                 {
                    cout << "Enter number "<< i +1 << "of the array2";
                    cin >> array2[i]; 
                 }  return ; 
       }

      int main  ()
      { // create  an array by taking the values from user 

        int len1;
        cout << "Enter the Size of the first array ";
        cin >> len1 ;
        array1function(len1);
        // Second array
        int len2;
        cout << "Enter the Size of the Second array ";
        cin >> len1 ;
        array2function(len2);
          
        
          return 0;
      }