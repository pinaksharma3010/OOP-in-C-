#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void getData(int a1, int b1);
    void putData();
};
void complex::getData(int a1, int b1)
    {
        a=a1;
        b=b1;


    }


     void complex::putData()
    {
        cout<<a<<"+i"<<b<<endl;
    }
int main()
{
    // complex c1(3,4);
    complex c1;
    c1.getData(3,4);
    c1.putData();
}
