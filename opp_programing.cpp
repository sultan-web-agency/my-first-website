#include <iostream>
#include <string>
using namespace std;
class Person {
    public:
    string name;
    Person(string n) { name = n;}
};
class Boss : public Person {
    public:
    string subject;
    Boss(string n , string s):Person (n) {subject = s;}
};
class TeamSize : public Boss {
    public:
    int teamSize;
    TeamSize(string n , string s,int t) :Boss(n,s) { teamSize = t;}
void display() {
    cout << "Person name:" << name << endl;
    cout << "Subject:" << subject << endl;
    cout << "TeamSize:" << teamSize << endl;
    cout << "=================" << endl;
}
};
int main() {
    TeamSize t1("SULTAN" , "OPP" ,111);
    TeamSize t2("SULTAN" , "0PP" , 422);
    cout << "=== Team 1 ===" << endl;
        t1.display();
    cout << "=== Team 2 ===" << endl;
        t2.display();
    return 0;
}

