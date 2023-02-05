#include <iostream>
using namespace std;
main()
{

    string name;
    int i = 0;
    cout << "enter string type: ";
    cin >> name;
    while (name[i] != '\0')
    {
        cout << "character: " << name[i] << " at index: " << i++ << endl;
    }
}