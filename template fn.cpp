#include <iostream>
using namespace std;

template <typename T>
T sum(T a, T b) { return a + b; }

template <typename T>
T sum(T a, T b, T c) { return a + b + c; }

int main() {
    cout << "Sum of two: " << sum(10, 20) << endl;
    cout << "Sum of three: " << sum(10, 20, 30) << endl;
    return 0;
}

