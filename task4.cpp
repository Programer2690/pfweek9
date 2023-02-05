#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;
    int arr[size];
    int num;
    
    for(int i=0;i<size;i++)
    {
        cout<<"enter no."<<i+1<<":";
        cin>>arr[i];

    }
    cout<<"enter no. to be multiply";
    cin>>num;
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]*num<<" ";
        

    }

}