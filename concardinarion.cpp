#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char name1[50],name2[50];
    cout<<"Enter Name 1:";
    cin>>name1;
    cout<<"Enter name 2:";
    cin>>name2;
    strcat(name1,name2);
    cout<<name1<<endl;
    cout<<name2<<endl;
}
