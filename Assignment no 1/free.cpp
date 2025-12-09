#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    cout << "WELCOME TO COMMITTEE PROGRAM" << endl;

    int numMembers, duration, installment, startMonth, winnerInterval;

    // Taking user inputs
    cout << "How many members would you like to have in your committee? ";
    cin >> numMembers;
    cin.ignore(); // Ignore the newline character

    string* names = new string[numMembers]; // Dynamic allocation for names
    string months[12] = {"January", "February", "March", "April", "May", "June",
                         "July", "August", "September", "October", "November", "December"};

    // Taking members' names
    for (int i = 0; i < numMembers; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        getline(cin, names[i]); // Takes full name
    }

    cout << "Enter the monthly installment amount: ";
    cin >> installment;

    cout << "Enter the starting month of the committee (1-12): ";
    cin >> startMonth;

    cout << "Enter the total duration of the committee (in months): ";
    cin >> duration;

 winnerInterval=duration/numMembers;
 int month;
 int totalAmount = (month + winnerInterval) * installment * numMembers;
    // Display committee details
    cout << "\nCommittee Details:\n";
    cout << "Total Members: " << numMembers << endl;
    cout << "Installment per Month: " << installment << endl;
    cout << "Total money collected is: " << totalAmount << endl;
    cout << "Total Duration: " << duration << " months\n";
    cout << "Committee starts in " << months[startMonth-1] << endl;
    cout << "Winner announced every " << winnerInterval << " month(s)\n\n";

    srand(time(0)); // Seed for random winner selection

    // Announce winners
    for ( month = 0; month < duration; month += winnerInterval)
    {
        int winnerIndex = rand() % numMembers; // Random winner selection
        cout << "Month: " << months[(startMonth + month -1) % 12] << endl;
        cout << "Winner: " << names[winnerIndex] << endl;
        cout << "Total money collected is: " << totalAmount << endl;
        cout << "-----------------------------\n";

        // Remove the winner from the list
        for (int i = winnerIndex; i < numMembers - 1; i++) {
            names[i] = names[i + 1];
        }
        numMembers--; // Reduce the number of members
    }

    cout << "Thank you for using the Committee Program!" << endl;
    cout << "The committee has successfully ended.\n";

    delete[] names; // Free dynamically allocated memory

    return 0;
}