#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void getData() {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s[3];  

    cout << "Enter details of 3 students:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ":\n";
        s[i].getData();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 3; i++) {
        s[i].display();
    }

    return 0;
}
