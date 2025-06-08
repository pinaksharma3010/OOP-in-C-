#include<iostream>
using namespace std;
class  test
{
    int a;
    public:
    test(int a1)
    {
        a=a1;
    }
    void putData() const
    {
        cout<<a<<endl;
    }
};
int main()
{
    const test t1(4);// It can access only constant methods
    t1.putData();


}
