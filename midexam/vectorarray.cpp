#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int studentname();
int studentgrade();
int studentmarks();
int studentage();
int studentaddress();
int studentphonenumber();
void choice();
int menu();

int main() {
    menu();
    return 0;
}

int menu() {
    int option;
    cout << "----------------------------------------" << endl;
    cout << "Welcome to the menu program!" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Please select an option (1-7): ";
    cout << endl;
    cout << "1. Student name" << endl;
    cout << "2. Student grade" << endl;
    cout << "3. Student marks" << endl;
    cout << "4. Student age" << endl;
    cout << "5. Student address" << endl;
    cout << "6. Student phone number" << endl;
    cout << "7. Exit" << endl;

    cin >> option;
    switch (option) {
    case 1:
        cout << "You selected option 1: Student name\n" << studentname() << endl;
        break;
    case 2:
        cout << "You selected option 2: Student grade\n" << studentgrade() << endl;
        break;
    case 3:
        cout << "You selected option 3: Student marks\n" << studentmarks() << endl;
        break;
    case 4:
        cout << "You selected option 4: Student age\n" << studentage() << endl;
        break;
    case 5:
        cout << "You selected option 5: Student address\n" << studentaddress() << endl;
        break;
    case 6:
        cout << "You selected option 6: Student phone number\n" << studentphonenumber() << endl;
        break;
    case 7:
        cout << "Thank you Mr/Miss to use our program\n"  << endl;
        exit(0);
        break;
    default:
        cout << "Invalid option. Please try again.\n" << endl;
        break;
    }
    return 0;
}
void choice() {
    cout << "----------------------------------------" << endl;
    cout << "Do you want to go the menu again? (1 for yes, 0 for no): ";
    int choice;
    cin >> choice;
    if (choice == 1) {
        menu();
    } else {
        cout << "Exiting the program." << endl;
        exit(0);
    }
    cout << "----------------------------------------" << endl;
}

int studentname() {
          cout << "--------------------Welcome to Student name menu ---------------------" << endl;

    
   choice();
    return 0;
}

int studentgrade() {
          cout << "--------------------Welcome to Student grade menu ---------------------" << endl;
    vector<string> names;
    vector<string> grades;
    cout << "type 'stop' to exit the loop):" << endl;
    while (true) {
        string name, grade;
        cout << "Enter your name: ";
        cin >> name;
        if (name == "stop") {
            cout << "Exiting the loop." << endl;
            break;
        }
        cout << "Enter your grade: ";
        cin >> grade;
        names.push_back(name);
        grades.push_back(grade);
    }
    
    // Print the student names and grades
    for (size_t i = 0; i < names.size(); i++) {
        cout << "Student name: " << names[i] << "\tGrade: " << grades[i] << endl;
    }
          
    choice();
    
    return 0;
}

int studentmarks() {
          cout << "--------------------Welcome to Student marks menu ---------------------" << endl;
    vector<string> names;
    vector<string> marks;
    cout << "type 'stop' to exit the loop):" << endl;
    while (true) {
        string name, mark;
        cout << "Enter your name: ";
        cin >> name;
        if (name == "stop") {
            cout << "Exiting the loop." << endl;
            break;
        }
        cout << "Enter your marks: ";
        cin >> mark;
        names.push_back(name);
        marks.push_back(mark);
    }
    
    // Print the student names and marks
    for (size_t i = 0; i < names.size(); i++) {
        cout << "Student name: " << names[i] << "\tMarks: " << marks[i] << endl;
    }
    choice();
    return 0;
}

int studentage() {
          cout << "--------------------Welcome to Student age menu ---------------------" << endl;
    vector<string> names;
    vector<string> ages;
    cout << "type 'stop' to exit the loop):" << endl;
    while (true) {
        string name, age;
        cout << "Enter your name: ";
        cin >> name;
        if (name == "stop") {
            cout << "Exiting the loop." << endl;
            break;
        }
        cout << "Enter your age: ";
        cin >> age;
        names.push_back(name);
        ages.push_back(age);
    }
    
    // Print the student names and ages
    for (size_t i = 0; i < names.size(); i++) {
        cout << "Student name: " << names[i] << "\tAge: " << ages[i] << endl;
    }
    choice();
    return 0;
}

int studentaddress() {
          cout << "--------------------Welcome to Student address menu ---------------------" << endl;
    vector<string> names;
    vector<string> addresses;
    cout << "type 's' to exit the loop):" << endl;
    while (true) {
        string name, address;
        cout << "Enter your name: ";
        cin >> name;
        if (name == "s") {
            cout << "Exiting the loop." << endl;
            break;
        }
        cout << "Enter your address: ";
        cin.ignore(); // To clear the newline character
        getline(cin, address); // To allow spaces in address
        names.push_back(name);
        addresses.push_back(address);
    }
    
    // Print the student names and addresses
    for (size_t i = 0; i < names.size(); i++) {
        cout << "Student name: " << names[i] << "\tAddress: " << addresses[i] << endl;
    }
    choice();
    return 0;
}

int studentphonenumber() {
          cout << "--------------------Welcome to Student phone number menu ---------------------" << endl;
    vector<string> names;
    vector<string> phoneNumbers;
    cout << "type 's' to exit the loop):" << endl;
    while (true) {
        string name, phoneNumber;
        cout << "Enter your name: ";
        cin >> name;
        if (name == "s") {
            cout << "Exiting the loop." << endl;
            break;
        }
        cout << "Enter your phone number: ";
        cin >> phoneNumber;
        names.push_back(name);
        phoneNumbers.push_back(phoneNumber);
    }
    
    // Print the student names and phone numbers
    for (size_t i = 0; i < names.size(); i++) {
        cout << "Student name: " << names[i] << "\tPhone Number: " << phoneNumbers[i] << endl;
    }

    choice();
    return 0;
}