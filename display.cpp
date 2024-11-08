#include <iostream>
using namespace std;

class Student {
public:
    inline int sum(int a, int b) {
        return a + b;
    }
};

int main() {
    Student s;
    cout << "Sum: " << s.sum(10, 20) << endl;
    return 0;
}

