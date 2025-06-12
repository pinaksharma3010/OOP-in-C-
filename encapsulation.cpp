#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    void getDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.setDetails("Pinak", 20);
    s1.getDetails();
    return 0;
}
