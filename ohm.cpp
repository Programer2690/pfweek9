#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter size: ";
    cin >> size;
    float sum = 0;
    float num[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter resistance " << i + 1 << ": ";
        cin >> num[i];
        sum = sum + num[i];
    }
    cout<<"total resistance: "<<sum;
    
}