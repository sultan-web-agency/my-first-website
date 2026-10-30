#include <iostream>
#include <string>
using namespace std;
class Person {
    public:
    string name;
    Person(string n) { name = n;}
};
class Teacher : public Person {
    public:
    string Subject;
Teacher(string n ,string s) : Person(n) { Subject = s;}
void displayTeacher() {
    cout << "Teacher name:" << name << endl;
    cout << "Subject:" << Subject << endl;
}
};
class Student: public Teacher {
    public:
    int rollNo;
    Student(string n , int r) : Teacher(n,"OPP") { rollNo = r;}
    void displayStudent() {
        cout << "Student name:" << name << endl;
        cout << " rollNo " << rollNo << endl;
    }
};
int main() {
    Teacher t1("SULTAN","OPP"); 
    t1.displayTeacher();
        cout << "=== Teacher ===" << endl;
    Student s1("ALI",422);
    s1.displayStudent();
        cout << "=== Student ===" << endl;
    return 0;
}


