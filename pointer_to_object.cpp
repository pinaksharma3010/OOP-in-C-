#include<iostream>
using namespace std;
class point
{
    int x,y;
     public:
    void getdata(int x, int y)
    {
        this->x=x;
        this->y=y;
    }
    void putData()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
int main()
{
    point p;
    point *ptr=new point();


    p.getdata(3,7);
    p.putData();


    ptr->getdata(4,8);
    ptr->putData();
   
}
