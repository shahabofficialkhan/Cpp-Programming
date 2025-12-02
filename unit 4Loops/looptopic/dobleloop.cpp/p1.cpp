#include <iostream>
using namespace std;

int main() {
    // Define an array of characters
    char characters[] = {'A', 'B', 'C', 'a', 'b', 'c', '0', '1', '2', '$', '*', '+', '/', ' '};
    
    // Print header
    cout << "Character    ASCII Value\n";
    cout << "-----------------------\n";
    
    // Loop through the array
    for (int i = 0; i < 14; i++) {
        cout << characters[i] << "           " << int(characters[i]) << endl;
    }

    return 0;
}