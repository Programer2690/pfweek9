#include<iostream>
using namespace std;
main()
{
    bool isfound=false;
    int num;
    int size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter no."<<i+1<<": ";
        cin>>arr[i];
        cout<<"enter no. to find: ";
    cin>>num;
    if(num==arr[i])
    {
        isfound=true;
    }
        }
        if(isfound==true)
        {
            cout<<"true";
        }
        else
        {
            cout<<"false";
        }
    
}