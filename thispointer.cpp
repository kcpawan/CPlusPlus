#include <iostream>
using namespace std;

class Student {
public:
    string name;

    void setName(string name) {
        this->name = name;   // this->name = object variable
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.setName("Prajwal");
    s1.display();

    return 0;
}