#include<iostream>
using namespace std;
int main()
{
    int a[10], *ptr[10],i;
    cout<<"Enter 5 values:"<<endl;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=4;i++)
    {
        ptr[i]=&a[i];
        cout<<ptr[i]<<endl;
    }

}
