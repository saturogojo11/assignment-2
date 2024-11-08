#include <iostream>
using namespace std;

class Student {
    string name, department, course;
    int age;
public:
    Student(string n, int a, string d, string c) : name(n), age(a), department(d), course(c) {}

    friend void displayDetails(Student s);
};

void displayDetails(Student s) {
    cout << "Name: " << s.name << "\nAge: " << s.age << "\nDepartment: " << s.department << "\nCourse: " << s.course << endl;
}

int main() {
    Student s("Alice", 20, "CS", "Programming");
    displayDetails(s);
    return 0;
}

