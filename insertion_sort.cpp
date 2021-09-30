#include<iostream>
using namespace std;
int main()
{
    int n , i, arr[20],j,temp;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter"<<n<<"numbers:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"Sorting the array";
    for(i=0;i<n;i++)
    {
        temp = arr[i];
        j= i-1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }




    cout<<"\n Sorted array is:\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}
