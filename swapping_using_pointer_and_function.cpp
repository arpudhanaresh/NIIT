#include<iostream>
using namespace std;
void swap(int * , int *);
int main()
{
    int a ,b;
    a=10;
    b=20;
    cout<<"Value of a Before swapping A: "<<a<<endl;
    cout<<"Value of b before swapping B: "<<b<<endl;
    swap(&a,&b);
    cout<<"Value of a after swapping A: "<<a<<endl;
    cout<<"Value of b after swapping B: "<<b<<endl;

}

void swap(int *a , int *b)
{
    int temp;
    temp=*a;
    *a = *b;
    *b = temp;
    cout<<"Value of A inside the swapping function: "<<*a<<endl;
    cout<<"Value of B inside the swapping function: "<<*b<<endl;

}
