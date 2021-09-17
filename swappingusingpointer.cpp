#include<iostream>
using namespace std;
int main()
{
    int a ,b ,*c, *d ,temp;
    a=10;
    b=20;
    cout<<"Value of A before swap: "<<a<<endl;
    cout<<"Value of B before swap: "<<b<<endl;
    c=&a;
    d=&b;

    temp = *d;
    *d = *c;
    *c = temp;
    cout<<"Value of A before swap: "<<a<<endl;
    cout<<"Value of B before swap: "<<b<<endl;

}
