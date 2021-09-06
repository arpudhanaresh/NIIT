#include<iostream>
using namespace std;
int main()
{
int x,*ptr;
x=20;
ptr=&x;
cout<<"Value of X: "<<x<<endl;
cout<<"Address of value X in PTR: "<<ptr<<endl;
cout<<"Value stored in Pointer address: "<<*ptr<<endl;
}
