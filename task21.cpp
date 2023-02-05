#include<iostream>
using namespace std;
main()
{
    int size;
    int s1[3];
    int x;
    cout<<"enter first no. of first array: ";
    cin >>s1[0];
    cout<<"enter second no. of first array: ";
    cin>>s1[2];
    cout<<"enter size of array 2: ";
    cin>>size;
    int s2[size];
    for ( x=0;x<size;x++)
    {
        cout<<"enter no. "<<x+1<<" of second array: ";
        cin>>s2[x];
        
        
    }
    s1[1]=s2[x++];
    cout<<s1[0]<<" "<<s1[1]<<" "<<s1[2];
}