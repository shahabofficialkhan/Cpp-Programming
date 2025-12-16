#include <iostream>
#include <string>
using namespace std;

class Sample {
public:
    int x;
    string name;
    Sample(int val , string s) {
        x = val;
        name = s;

    }
    Sample(const Sample &s) {
        x = s.x;
        name = s.name;
        cout << "Copy Constructor called" << endl;
    }
};

int main() {

    Sample s1(20 , "shahab");
    Sample s2 = s1;
    s2.name = "fahad";
    cout << s1.x << " \t"  << s1.name<<  endl;
    cout << s2.x << " \t" << s2.name<<  endl;
    return 0;
}
