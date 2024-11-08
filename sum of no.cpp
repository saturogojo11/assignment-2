#include <iostream>
using namespace std;

int sum(int a, int b) { return a + b; }
int sum(int a, int b, int c) { return a + b + c; }
int sum(int a, int b, int c, int d) { return a + b + c + d; }

int main() {
    cout << "Sum of two: " << sum(10, 20) << endl;
    cout << "Sum of three: " << sum(10, 20, 30) << endl;
    cout << "Sum of four: " << sum(10, 20, 30, 40) << endl;
    return 0;
}

