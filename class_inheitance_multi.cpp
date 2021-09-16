#include<iostream>
using namespace std;
class arpudha

{
    public:
    arpudha()
    {
        cout<<"Arpudha Constructor is called"<<endl;
    }

};
class arp1 : public arpudha
{
    public:
    arp1(int a , int b)
    {

        cout<<"arp1 constructor is called"<<endl;
        cout<<"value of a:"<<a<<"\n"<<"value of b:"<<b<<endl;
    }
};
int main()
{
    arp1 a(10,20);
}
