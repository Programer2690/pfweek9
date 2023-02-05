#include<iostream>
using namespace std;
main()
{
    float arr[4];
    float sum;
    int num;
        cout<<"enter total: ";
        cin>>num;
        cout<<"enter quarters: ";
        cin>>arr[0];
        cout<<"enter dime: ";
        cin>>arr[1];
        cout<<"enter nickel: ";
        cin>>arr[2];
        cout<<"enter penny: ";
        cin>>arr[3];
    
    sum=(arr[0]*.25)+(arr[1]*.10)+(arr[2]*.05)+(arr[3]*.01);
    if(sum==num)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}