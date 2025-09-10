#include <iostream.h>
#include <conio.h>
#include <string.h>

// Base class
class Person {
protected:
    char name[30];
    int age;

public:
    void setPerson(char n[], int a) {
        strcpy(name, n);
        age = a;
    }

    void showPerson() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

// Derived class Student
class Student : public Person {
private:
    int rollNo;

public:
    void setStudent(char n[], int a, int r) {
        setPerson(n, a);
        rollNo = r;
    }

    void showStudent() {
        showPerson();
        cout << "\nRoll No: " << rollNo;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    char subject[20];

public:
    void setTeacher(char n[], int a, char s[]) {
        setPerson(n, a);
        strcpy(subject, s);
    }

    void showTeacher() {
        showPerson();
        cout << "\nSubject: " << subject;
    }
};

void main() {
    clrscr();

    Student s;
    s.setStudent("Rahul", 20, 101);
    cout << "\n--- Student Details ---";
    s.showStudent();

    Teacher t;
    t.setTeacher("Mr. Sharma", 45, "Mathematics");
    cout << "\n\n--- Teacher Details ---";
    t.showTeacher();

    getch();
}
