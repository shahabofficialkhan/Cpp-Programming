#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "katak";
    int count = 0;
    int len = name.length();
    cout << "Length of string: " << len <<endl;
    int i =0;
    for (int x = len-1 ; x >= 0 ; x--) {
        char comp = name[x];              // character from start
        char comp1 = name[i];   // character from end
        i ++;
        if (comp == comp1) {
            count++;
        }
    }

    // If all matching pairs are equal, it's a palindrome
    if (count == len ) {
        cout << "The string is palindrome" << endl;
    } else {
        cout << "The string is not palindrome" << endl;
    }

    return 0;
}
