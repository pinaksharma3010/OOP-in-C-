#include<iostream>
using namespace std;
class  test
{
    int a;
    public:
    void getData(int a1) //const// It cant be a constant method
    {
        a=a1;           // because it is updating the private var
    }
    void putData() const// It can be a constant method
    {
        cout<<a<<endl;
    }
};
int main()
{
    test t1;
    t1.getData(5);
    t1.putData();


}

