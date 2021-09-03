#include<iostream>
using namespace std;
int main()
{
    int i,j,a[5][5];
    cout<<"Enter 3x3 Matrix:";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
        cout<<"\n";
    }
    cout<<"The Matrix is:"<<endl;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<"\n";
    }
}
