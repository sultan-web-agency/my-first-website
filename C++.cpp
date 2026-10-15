#include <iostream>
using namespace std;
class Student {
    public:
    string name;
    int rollNo;
    void display () {
        cout << "Name:" << name << endl;
        cout << "rollNo:" << rollNo << endl;
    }
};
int main () {
    Student s1;
    s1.name="SULTAN";
    s1.rollNo=422;
    s1.display();
    return 0;
};
