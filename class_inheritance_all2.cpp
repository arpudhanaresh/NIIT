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
        cout<<"arp1 contructor without overloading"<<endl;
    }
    arp1(int a , int b)
    {
        cout<<"inherited constructor overloading"<<endl;
        cout<<"arp1 constructor is called"<<endl;
        cout<<"value of a:"<<a<<"\n"<<"value of b:"<<b<<endl;
    }
    int func1()
    {
        cout<<"func1 inheritance function called"<<endl;
    }

};
class arp2 : public arp1 , public arpudha
{
public:
    arp2()
    {
        cout<<"constructor arp2 is called"<<endl;
    }
};
int main()
{
   arp1 a(12,4);

    arpudha c;

    arp2 de;
}
