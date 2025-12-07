#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct BookRecord {
//     vector<string> title;    // Changed from vector<char>
//     vector<string> author;   // Changed from vector<char>
//     vector<string> status;   // Changed from vector<char>
//     vector<int> isbn;
    string title, author, status;
    int isbn;
};

int main() {
    BookRecord b[2];
//     string title, author, status;
//     int isbn;
    
    int i=1;
    
    for (i;=1 ; i <=2 ; i ++) {  // Changed from while(true)
          cout << "Enter title of book: ";
        getline(cin, b[i].title)
        cout << "Enter author of book: ";
            getline(cin ,b[i].author);// Using getline to read entire line including spaces
        cout << "Enter status of book: ";
        getline(cin ,b[i].status);
        cout << "Enter the isbn of book: ";
        cin >> b[i].isbn;
        
// Push into the vectors
//         b.title.push_back(title);
//         b.author.push_back(author);
//         b.status.push_back(status);
//         b.isbn.push_back(isbn);
        
//         cout << "Enter 1 to continue or 0 to exit: ";
//         cin >> loop;
    }
    
    
          // fstream file;
          // file.open("data.txt", ios :: in | ios :: out);
          // if (file.is_open()){
          //           cout << "File opened successfully";
          //           // file<<b.title;
          // }
          // else {
          //           cout <<"error in th file opening";
          //           file.close();
          // }
           return 0;
          
          }