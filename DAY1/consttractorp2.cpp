#include <iostream>
using namespace std;

class Sample {
public:
    int x;
    Sample(int val) {
        x = val;
    }
    Sample(const Sample &s) {
        x = s.x;
        cout << "Copy Constructor called" << endl;
    }
};

int main() {
    Sample s1(20);
    Sample s2 = s1;
    cout << s2.x << endl;
    return 0;
}
