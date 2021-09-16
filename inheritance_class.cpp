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
    arp1()
    {
        cout<<"arp1 constructor is called"<<endl;
    }
};
int main()
{
    arp1 a;
}
