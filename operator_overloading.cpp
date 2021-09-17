#include<iostream>
using namespace std;
class ops
{
private:
    int a,b;
public:
    void operator -()
    {
        a=-a;
        b=-b;
    }
    void acc(int x,int y)
    {
        a=x;
        b=y;
    }

    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int main()
{
    ops obj;
    obj.acc(10,-20);
    obj.display();
    -obj;
    obj.display();
    return 0;
}
