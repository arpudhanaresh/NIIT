#include<iostream>
using namespace std;
int main()
{
    int a=50;
    int *c;
    cout<<"value of a:"<<a<<endl;
    cout<<"address of c: "c<<endl;  //garbage value
    cout<<"address of a:"<<&a<<endl;
    c=&a;
    *c=30;
    cout<<"value of a after changing value in address:"<<a<<endl;
}
