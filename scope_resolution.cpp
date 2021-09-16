#include<iostream>
using namespace std;
class arpudha
{
public:
    arpudha();
    void test();
};
void arpudha::test()
{
    cout<<"test1"<<endl;
}
arpudha::arpudha()
{
    cout<<"This is constructor"<<endl;
}

int main()
{
    arpudha a;
    a.test();
    return 0;
}
