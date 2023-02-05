#include <iostream>
using namespace std;
main()
{
    int i=0;
    int count=0;
    string name;
    cout << "enter text: ";
    cin >> name;
    getline(cin, name);
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    cout<<count;
}