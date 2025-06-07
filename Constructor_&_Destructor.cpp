#include <iostream>
using namespace std;
class test
{
    int a;


public:
    test(int a)
    {
        this->a = a;
        cout << "Constructor called for a= " << a << endl;
    }


    ~test()
    {
        cout << "Destructor called for a= " << a << endl;
    }
};
int main()
{
    test t1(3);
    {
        test t2(4);
        {
            test t3(5);
        }
    }
}
