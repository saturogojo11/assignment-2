#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Student {
    T name, course, department;
    int age;

    void display() {
        cout << "Name: " << name << "\nAge: " << age << "\nCourse: " << course << "\nDepartment: " << department << endl;
    }
};

int main() {
    Student<string> s = {"Alice", 20, "Programming", "CS"};
    s.display();
    return 0;
}

