#include <iostream>
using namespace std;

class NumberChecker;

class Number {
    int num;
public:
    Number(int n) : num(n) {}
    friend class NumberChecker;
};

class NumberChecker {
public:
    bool isPrime(Number n) {
        if (n.num < 2) return false;
        for (int i = 2; i <= n.num / 2; ++i) {
            if (n.num % i == 0) return false;
        }
        return true;
    }
};

int main() {
    Number n(29);
    NumberChecker checker;
    cout << "Is prime: " << checker.isPrime(n) << endl;
    return 0;
}

