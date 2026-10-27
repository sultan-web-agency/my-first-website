#include <iostream>
#include <string>
using namespace std;
class Person {
    public:
    string name;
    Person(string n ) { name = n;}
};
class Boss : public Person {
    public:
    string subject;
    Boss(string n, string s): Person(n) { subject = s;}   
};
class TeamSize : public Boss {
    public:
    int teamSize;
TeamSize(string n,string s,int t) :Boss(n,s) {teamSize =t;}
void display() {
    cout << "Boss name:" <<  name << endl;
    cout << "subject:" << subject << endl;
    cout << "teamSize:" << teamSize << endl;
}
};
int main() {
    TeamSize t1("SULTAN" ,"OPP" , 111);
t1.display();
    return 0;
}

