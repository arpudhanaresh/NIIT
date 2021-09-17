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
    cout<<"value stored in address of c before swapped:"<<*c<<endl;
    cout<<"Value stored in address of d before swapped:"<<*d<<endl;
    temp = *d;
    *d = *c;
    *c = temp;
    cout<<"Value of A before swap: "<<a<<endl;
    cout<<"Value of B before swap: "<<b<<endl;


    cout<<"value stored in address of c after swapped:"<<*c<<endl;
    cout<<"Value stored in address of d after swapped:"<<*d<<endl;

}
