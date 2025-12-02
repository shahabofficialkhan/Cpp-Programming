#include <iostream>
#include <string>
#include <algorithm>
#include <limits>
#include <random>
using namespace std;

int main() {
    int numMem, amount, totalComm, mode, startIndex = -1;
    string startMonth;
    const int MONTHS = 12;
    string months[MONTHS] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
    
    cout << "\n**************** Committee Organizer ****************\n\nEnter the Number of Members in the Committee: ";
    cin >> numMem;
    
    string members[numMem];
    cout << "\n************** Please Enter Member Names **************\n";
    for (int i = 0; i < numMem; i++) {
        cout << "Member " << i + 1 << ": ";
        cin >> members[i];
    }
    
    int numbers[numMem];
    for (int i = 0; i < numMem; i++) numbers[i] = i;
    shuffle(numbers, numbers + numMem, mt19937(random_device()()));
    
    cout << "\n************** Committee Members Turns **************\n";
    for (int i = 0; i < numMem; i++)
        cout << "Turn " << i + 1 << ": " << members[numbers[i]] << "\n";
    
    cout << "\n************** Committee Month Scheduling **************\n";
    cout << "Please Enter the total number of committees: ";
    cin >> totalComm;
    cout << "\n***Please Enter the Name of the Month in which the Committee will start: ***\n";
    cin >> startMonth;
    transform(startMonth.begin(), startMonth.end(), startMonth.begin(), ::tolower);
    cout << "\n**Please enter how much will each committee member pay: ";
    cin >> amount;
    
    for (int i = 0; i < MONTHS; i++) {
        if (months[i] == startMonth) { startIndex = i; break; }
    }
    if (startIndex == -1) {
        cout << "Invalid month entered. Exiting program.\n";
        return 1;
    }
    
    cout << "\nHow would you like to conduct the lucky draws?\n  (1) Conduct all draws at once\n  (2) Schedule one draw per month\nYour choice: ";
    cin >> mode;
    cout << "\nThe committee period is from " << startMonth << " to " << months[(startIndex + totalComm - 1) % MONTHS] << ".\n";
    
    int drawIndex = 0;
    cout << "\n************** Committee Draws and Prize Distribution **************\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < totalComm; i++) {
        if (mode == 2) {
            cout << "Press Enter for " << months[(startIndex + i) % MONTHS] << " committee draw...";
            cin.get();
        }
        cout << "Committee " << i + 1 << " (" << months[(startIndex + i) % MONTHS] << "): " << members[numbers[drawIndex]] << " is selected and wins Rs " << amount * numMem << "\n";
        drawIndex = (drawIndex + 1) % numMem;
    }
    
    cout << "\nThank you for using the Committee Organizer!\n";
    return 0;
}