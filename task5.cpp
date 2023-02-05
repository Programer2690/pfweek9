#include<iostream>
using namespace std;
main()
{
    int size;
    int largest;
    cout<<"enter size: ";
    cin>>size;
    int num[size];
    for(int i=0;i<size;i++)
    {
        if(num[0]<num[i])
        {
            largest=num[i];
        }
    }
    cout<<largest;
}