#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
private:
    string studentId;
    double gpa;

public:
    Student(string n, int a, string id, double g) : Person(n, a), studentId(id), gpa(g) {}
    void display() {
        Person::display();
        cout << "Student ID: " << studentId << ", GPA: " << gpa << endl;
    }
};

class Teacher : public Person {
private:
    string employeeId;
    string subject;

public:
    Teacher(string n, int a, string id, string sub) : Person(n, a), employeeId(id), subject(sub) {}
    void display() {
        Person::display();
        cout << "Employee ID: " << employeeId << ", Subject: " << subject << endl;
    }
};

int main() {
    Student s("Alia", 20, "S12345", 3.8);
    Teacher t("Mr. Smith", 45, "T987", "Mathematics");

    s.display();
    cout << endl;
    t.display();

    return 0;
}
