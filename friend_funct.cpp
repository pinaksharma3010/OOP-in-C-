#include <iostream>
using namespace std;
class complex
{
    int a, b;
    friend void rev(complex &);


public:
    void getData(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void putData()
    {
        cout << a << "+i" << b << endl;
    }
};
void rev(complex &c1)
{
    int temp = c1.a;
    c1.a = c1.b;
    c1.b = temp;
}
int main()
{
    complex c1;
    c1.getData(3, 4);
    c1.putData();
    rev(c1);
    c1.putData();
}


