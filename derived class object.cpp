#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int a, b, c;

    // Constructor to initialize values
    Base(int x, int y, int z) : a(x), b(y), c(z) {}

    // Virtual function to calculate the sum of three numbers
    virtual int sum() {
        return a + b + c;
    }
};

// Derived class
class Derived : public Base {
public:
    // Constructor to initialize values for derived class
    Derived(int x, int y, int z) : Base(x, y, z) {}

    // Overriding the sum function to demonstrate function overriding
    int sum() override {
        return a + b + c;
    }

    // Function to display sum using base class and derived class objects
    void displaySum(Base &baseObj) {
        cout << "Sum from Base class object: " << baseObj.sum() << endl;
        cout << "Sum from Derived class object: " << this->sum() << endl;
    }
};

int main() {
    // Creating a Base class object
    Base baseObj(10, 20, 30);
    // Creating a Derived class object
    Derived derivedObj(40, 50, 60);

    // Displaying the sum of base and derived class
    derivedObj.displaySum(baseObj);

    return 0;
}

