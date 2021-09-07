#include<iostream>
using namespace std;
int arpudha(int a)
{
    a=10;
    cout<<"value inside the function: "<<a<<endl;
}
int main()
{
    int a=20;
    cout<<"Value of a Before calling function: "<<a<<endl;
    arpudha(a);
    cout<<"Value of a after calling function: "<<a<<endl;


}
