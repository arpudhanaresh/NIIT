#include<iostream>
using namespace std;
int arpudha (int a , int b)
{
    int c;
    c=a+b;
    return c;
}
double arpudha (double a , double b)
{
    double c;
    c=a/b;
    return c;
}
char arpudha()
{
    char a= 'a';
    return a;
}
int main()
{
    int integer;
    double double1;
    char character;
    integer=arpudha(2,3);
    double1=arpudha(2.1,4.3);
    cout<<"This is integer: "<<integer<<endl;
    cout<<"This is double: "<<double1<<endl;
    cout<<"This is a character: "<<arpudha();
}

