#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct studentRecord {
  string name;
  int    srno;
  float  marks;
};
int main() {
    studentRecord s;
  

    cout << "How many students do you want to add?" << endl;
    int n;
    cin >>n;
    fstream fileout ("data.txt", ios :: app);
    for(int i = 0; i < n ; i++) {
      cin.ignore();
    cout << "Enter the name of the student: ";
    getline(cin ,s.name);
    cout << "Enter the student roll number: ";
    cin >> s.srno;
    cout << "Enter the student Marks: ";
    cin >>  s.marks;
    fileout  <<"\n " <<s.srno <<" " <<s.name<<" "  <<s.marks;
    // cin.ignore();
  }fileout.close();
    fstream infile ("data.txt",ios ::in);
    string line;
  //   int srno;
  //  cout << "Enter roll no ";
  //  cin >>srno;
  //  while (infile >>s.srno >>s.name>>s.marks)
  while (infile.eof()==0) {
    // if (srno == s.srno) {
      infile >>s.srno >>s.name>>s.marks;
      cout <<"\n " <<s.srno <<" " <<s.name<<" " <<s.marks;
      
//     break;}
}
    infile.close();
    return 0;
}