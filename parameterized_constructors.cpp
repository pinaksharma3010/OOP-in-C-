#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    // void getData(int a1, int b1)
    // {
    //     a=a1;
    //     b=b1;
    // }
    // complex()
    // {
    //     a=0;
    //     b=0;
    // }
    // complex(int a1)
    // {
    //     a=a1;
    //     b=0;
    // }
    complex(int a1, int b1=100)
    {
        a=a1;
        b=b1;
    }
    void putData()
    {
        cout<<a<<" +i"<<b<<endl;
    }
};
int main()
{
    // complex c1(4,5);
    complex c1(3,10);
    // c1.getData(4,5);
    c1.putData();
}
