#include<iostream>
using namespace std;
main()
{   
    
    string name;
    int i=0;
   int t=0;
    cout<<"enter name : ";
    cin>>name;
    while(name[i]!='\0')
    {
        t++;
        i++;
        
       
    }
    for(int i=t;i>=0;i--)
    {
        cout<<name[i];
    }
}