#include<iostream>
using namespace std;
int main()
{
    int *ptr , **dptr , a ;
    a=50;
    ptr=&a;
    dptr=&ptr;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a :"<<&a<<endl;
    cout<<"address of a stored in pointer: "<<ptr<<endl;
    cout<<"value of  address stored in pointer: "<<*ptr<<endl;
    cout<<"address stored in double pointer: "<<dptr<<endl;
    cout<<"value of address poiting the pointer: "<<*dptr<<endl;
    cout<<"value stored in pointing the another pointer: "<<**dptr<<endl;
    cout<<"address of pointer: "<<&ptr<<endl;
    cout<<"address of double pointer: "<<&dptr<<endl;
}
