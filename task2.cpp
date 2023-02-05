#include<iostream>
using namespace std;
main()
{
    int size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter no."<<i+1<<":";
        cin>>arr[i];

    }
    for(int i=size-1;i>0;i--)
    {
        cout<<arr[i]<<" ";
        

    }

}