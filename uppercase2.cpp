#include<iostream>
using namespace std;
int main()
{

    char str[50];
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"\n";
    str[0]=toupper(str[0]);
    cout<<"after upper case: "<<str;
}
