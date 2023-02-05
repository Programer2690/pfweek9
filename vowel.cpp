#include <iostream>
using namespace std;
main()
{
    string name;
    int i=0;
    int t=0;
    cout<<"enter name: ";
    getline(cin,name);
    while(name[i] != '\0')
    {
        i++;
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
            t++;
        }
    }
    cout<<t;
}