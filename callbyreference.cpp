#include<iostream>
using namespace std;

int arpudha(int *a)
{
    *a=0;
    cout<<"Value of a Inside the function: "<<*a<<endl;
}

int main()
{
    int a=20;
    cout<<"Value of a before calling the function: "<<a<<endl;
    arpudha(&a);
    cout<<"Value of a after calling the function: "<<a<<endl;
}

