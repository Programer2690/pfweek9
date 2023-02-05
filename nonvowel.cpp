#include <iostream>
using namespace std;
main()
{
    string name;
    int i = 0;
    int x=0;
    string t ;
    cout << "enter name: ";
    getline(cin, name);
    while (name[i] != '\0')
    {
        
        if (name[i] != 'a' && name[i] != 'e' && name[i] != 'i' && name[i] != 'o' && name[i] != 'u')
        {
            t=name[i];
        }i++;
    }x++;
    cout << t;
}