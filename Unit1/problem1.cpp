#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a five-digit number: ";
    cin >> num;

    // Extract each digit starting from the leftmost
    int d1 = num / 10000;         // Get the first digit
    int remainder = num % 10000;   // Remainder after removing the first digit

    int d2 = remainder / 1000;     // Get the second digit
    remainder %= 1000;             // Update remainder

    int d3 = remainder / 100;      // Get the third digit
    remainder %= 100;              // Update remainder

    int d4 = remainder / 10;       // Get the fourth digit
    int d5 = remainder % 10;       // Get the fifth digit

    // Print each digit separated by three spaces
    cout << d1 << "   " << d2 << "   " << d3 << "   " << d4 << "   " << d5 << endl;

    return 0;
}