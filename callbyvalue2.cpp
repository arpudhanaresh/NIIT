#include<iostream>
using namespace std;
class arpudha
{
    public:
    void arp(int b)
    {
        int a=b;
        cout<<"valur of a inside the function:"<<a<<endl;;
    }

};
int main()
{
    arpudha arr;
    int a=100;
    cout<<"value of a before calling function: "<<a<<endl;
    arr.arp(a);
    cout<<"value of a afte calling the function: "<<a<<endl;
}
