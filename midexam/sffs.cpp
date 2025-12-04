   //SP25-BSE-102
   //Muhammad Shahab
   #include <iostream>
   #include <iomanip>
   #include <string>
   #include <vector>
   using namespace std;
// Global vectors to store student records
   vector<string> names;
   vector<string> regnumbers;
   vector<string> comps;
   vector<string> obtainmarks;
   vector<string> totalmarks;
// Function prototypes
   void mainMenu();
   void addStudentRecord();
   void displayAllRecords();
   void deleteRecord();
   void choice();
int main() { 
    cout << "====================" << endl;
    cout << "Student Record Management System" << endl;
    cout << "====================" << endl;
    mainMenu();

    return 0;
}//main
// Function definitions
void mainMenu() {
    int option;

    do {
        cout << "\nPlease select an option:" << endl;
        cout << "1. Add a new student record" << endl;
        cout << "2. Display all student records" << endl;
        cout << "3. Delete a record" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                addStudentRecord();
                break;
            case 2:
                displayAllRecords();
                break;
            case 3:
                deleteRecord();
                break;
            case 4:
                cout << "Thank you to using our program " << endl;

                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (option != 4);
}
// Function to add a new student record
void addStudentRecord() {
    string name, regnum, comp, obtained, total;
    
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter registration number: ";
    getline(cin, regnum);

    cout << "Enter computer subject name: ";
    getline(cin, comp);

    cout << "Enter obtained marks: ";
    getline(cin, obtained);

    cout << "Enter total marks: ";
    getline(cin, total);

    // Add to vectors
    names.push_back(name);
    regnumbers.push_back(regnum);
    comps.push_back(comp);
    obtainmarks.push_back(obtained);
    totalmarks.push_back(total);

    cout << "Record added successfully!" << endl;
}
// Function to display all student records
void displayAllRecords() {
    if (names.empty()) {
        cout << "No student records available." << endl;
        return;
    }

    cout << "\nDisplaying all student records:\n";
    cout << left << setw(20) << "Name" 
         << setw(15) << "Reg No" 
         << setw(15) << "Subject" 
         << setw(15) << "Obtained" 
         << setw(15) << "Total" << endl;
    
    cout << "----------------------------------------------------------------------" << endl;
    
    for (size_t i = 0; i < names.size(); i++) {
        cout << left << setw(20) << names[i]
             << setw(15) << regnumbers[i]
             << setw(15) << comps[i]
             << setw(15) << obtainmarks[i]
             << setw(15) << totalmarks[i] << endl;
    }
}
// Function to delete a student record
void deleteRecord() {
    if (names.empty()) {
        cout << "No records to delete." << endl;
        return;
    }
    
    string regnum;
    cout << "Enter registration number of student to delete: ";
    cin.ignore();
    getline(cin, regnum);

    bool found = false;
    for (size_t i = 0; i < regnumbers.size(); i++) {
        if (regnumbers[i] == regnum) {
            names.erase(names.begin() + i);
            regnumbers.erase(regnumbers.begin() + i);
            comps.erase(comps.begin() + i);
            obtainmarks.erase(obtainmarks.begin() + i);
            totalmarks.erase(totalmarks.begin() + i);
            found = true;
            cout << "Record deleted successfully!" << endl;
            break;
        }
    }

    if (!found) {
        cout << "Record not found!" << endl;
    }
}