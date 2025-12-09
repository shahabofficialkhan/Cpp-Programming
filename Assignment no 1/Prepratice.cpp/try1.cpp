//  #include <iostream>
//    #include <cstdlib>
//     using namespace std ;
// //           // ludo function prototype
// //           int ludoFunct () ;
// //      int glob =2;
// //      int glob2 = 3;
// //      int main () 
// //      {
// //           cout << "the multiplication of golb and glob2 is = " <<glob*glob2  << endl;
// //           ludoFunct();
// //           return 0;
// //      }
// //      int ludoFunct () 
// //       {   
// //           int face;
// //           int face1=0;
// //           int face2=0;
// //           int face3=0;
// //           int face4=0;
// //           int face5=0;
// //           int face6=0;
// //           for (int i = 1; i <= 10000; i++) {
// //                     face = 1 + rand() % 2;
// //                 //    cout <<  "the vaeue of face is =" << face <<endl;
// //                    switch (face)
// //                     {
// //                     case 1:
// //                          face1++;
// //                                    break;
// //                     case 2:
// //                         face2++;
// //                                    break;      
// //                     case 3:
// //                          face3++;
// //                                    break;
// //                     case 4:
// //                          face4++;
// //                                    break;
// //                     case 5:
// //                          face5++;
// //                                    break;
// //                     case 6:
// //                          face6++;
// //                                    break;

// //                     default:
// //                               break;
// //                     }
                    
// //                     }
// //                     cout <<"the value of 1: " << face1  << endl;
// //                     cout <<"the value of 2: " << face2  << endl;
// //                     cout <<"the value of 3: " << face3  << endl;
// //                     cout <<"the value of 4: " << face4  << endl;
// //                     cout <<"the value of 5: " << face5  << endl;
// //                     cout <<"the value of 6: " << face6  << endl;
// //                     cout << "the multiplication of golb and glob2 is = " << glob*glob2<< endl;
// //            return 0;

// //      }
// int main() {
//      int n;
//      cout << "Enter the number of names: ";
//      cin >> n;
//      cin.ignore(); // To clear the newline left in the buffer
 
//      string names[n]; // Array to store names
 
//      for(int i = 0; i < n; i++) {
//          cout << "Enter name " << i + 1 << ": ";
//          getline(cin, names[i]); // Takes full name
//      }
 
//      cout << "\nYou entered:\n";
//      for(int i = 0; i < n; i++) {
//          cout << names[i] << endl;
//      }
// }