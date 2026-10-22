#include <iostream>
#include <string>
using namespace std;
class Person {
    public:
    string name;
    Person(string n) { name = n;}
};
class Subject {
    public:
    string subject;
    Subject(string s) {subject = s;}
};
class Boss : public Person , public Subject {
    public:
    Boss(string n, string s) : Person(n),Subject(s) {}
void display() {
    cout << "Boss name:" << name << endl;
    cout << "Subject:" << subject << endl;
}
};
int main() {
    Boss b1("SULTAN","OPP");
    b1.display();
    return 0;
};
    


    


