#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int *ptr=&i;
    cout<<"value of ptr: "<<ptr<<endl;
    cout<<"Value of ptr+1 :"<<ptr+1<<endl;
    cout<<"Value of ptr+1 :"<<ptr+2<<endl;
    cout<<"Value of ptr+1 :"<<ptr+3<<endl;
}
