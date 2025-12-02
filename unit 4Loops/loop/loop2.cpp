#include <iostream>
using namespace std;

int main() {
    double gallons, miles, milesPerGallon, totalMilesPerGallon = 0;
    int count = 0;

    while (true) {
        cout << "Enter the gallons used (-1 to end): ";
        cin >> gallons;
        
        if (gallons == -1) break;  // Exit condition

        cout << "Enter the miles driven: ";
        cin >> miles;

        milesPerGallon = miles / gallons;
        cout << "The miles/gallon for this tank was " << milesPerGallon << endl;

        totalMilesPerGallon += milesPerGallon;
        count++;
    }

    if (count > 0) {
        double averageMilesPerGallon = totalMilesPerGallon / count;
        cout << "\nThe overall average miles/gallon was " << averageMilesPerGallon << endl;
    } else {
        cout << "\nNo data was entered." << endl;
    }

    return 0;
}