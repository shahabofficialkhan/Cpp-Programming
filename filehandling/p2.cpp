#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("note.txt");
    string line;
    int count = 0;

    while (getline(fin, line)) {
        count++;
    }
    cout << "Total lines: " << count;
    return 0;
}
