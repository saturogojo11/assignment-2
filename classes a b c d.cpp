#include <iostream>
using namespace std;

class A;
class B;
class C;

class FriendClass {
public:
    void displayData(A a, B b, C c);
};

class A {
private:
    int dataA;
public:
    A(int x) : dataA(x) {}
    friend class FriendClass;
};

class B {
protected:
    int dataB;
public:
    B(int y) : dataB(y) {}
    friend class FriendClass;
};

class C {
private:
    int dataC;
public:
    C(int z) : dataC(z) {}
    friend class FriendClass;
};

void FriendClass::displayData(A a, B b, C c) {
    cout << "A: " << a.dataA << "\nB: " << b.dataB << "\nC: " << c.dataC << endl;
}

int main() {
    A a(10);
    B b(20);
    C c(30);
    FriendClass f;
    f.displayData(a, b, c);
    return 0;
}

