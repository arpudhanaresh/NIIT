#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp =a;
    a=b;
    b=temp;
    cout<<"Value of a After swapped: "<<a<<endl;
    cout<<"Value of b after swapped: "<<b<<endl;


}
int main()
{
    int a=10,b=20;
    cout<<"Value of a Before swap: "<<a<<endl;
    cout<<"Value of b before swap: "<<b<<endl;
    swap(a,b);
    cout<<"Value of a after swap function : "<<a<<endl;
    cout<<"Value of b after swap function: "<<b<<endl;
    return 0;
}
