#include<iostream>
using namespace std;
class distances
{
    int f,i;
    public:
    distances(int f1=0, int i1=0)
    {
        f=f1;
        i=i1;
    }
    void putData()
    {
        cout<<f<<"\""<<i<<"\'"<<endl;
    }
    distances add(distances t1, distances t2)
    {
        distances temp;
        temp.f=t1.f+t2.f+(t1.i+t2.i)/12;
        temp.i=(t1.i+t2.i)%12;
        return temp;
       


    }
};
int main()
{
    distances t1(3,12);
    t1.putData();


    distances t2(4,12);
    t2.putData();


    distances t3;
    t3=t3.add(t1,t2);
    t3.putData();
}
