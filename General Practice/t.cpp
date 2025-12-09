#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter Number: ";
    cin >> a;
    cout << "Enter Number: ";
    cin >> b;

    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        c = a / b;
        cout << "Result: " << c << endl;
    }

    return 0;
}