#include<iostream>
using namespace std;
class arpudha
{

    public:
    arpudha(int a, int b)
    {

        int c=a+b;
        cout<<"Constructor value of: "<<c;
    }

};

int main()
{
    arpudha arp(10,20);
    return 0;
}
