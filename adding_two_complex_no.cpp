#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex()
    {
        a=0;
        b=0;
    }
    complex(int a1, int b1)
    {
        a=a1;
        b=b1;
    }
    void putData()
    {
        cout<<a<<"+i"<<b<<endl;
    }
    // void add(complex &c1, complex &c2)    way 1 of doing it
    // {
    //     cout<<c1.a+c2.a<<"+i"<<c1.b+c2.b<<endl;


    // }
    complex add(complex &c1, complex &c2) //way 2 of doing it
    {
        complex c3;
        c3.a=c1.a+c2.a;
        c3.b=c1.b+c2.b;
        return c3;
    }
};
int main()
{
    complex c1(3,4);
    c1.putData();
    complex c2(4,5);
    c2.putData();
    complex c3;
    // c3.add(c1,c2);  way 1 of doing it
    c3=c3.add(c1,c2); //way 2 of doing it
    c3.putData();
}
