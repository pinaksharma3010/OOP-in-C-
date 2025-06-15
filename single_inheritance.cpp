class Animal {
public:
    void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
};

int main() {
    Dog d;
    d.sound();
    return 0;
}
