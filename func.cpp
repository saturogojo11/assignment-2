#include <iostream>
using namespace std;

class Base {
public:
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};

class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        return a + b + c + 10; // For example, add 10
    }
};

int main() {
    Derived d;
    cout << "Sum in derived: " << d.sum(10, 20, 30) << endl;
    return 0;
}

