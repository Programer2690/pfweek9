#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {

        cout << "enter no." << i + 1 << ":";
        cin >> arr[i];
        int sum = 0;
        float average;
        sum = sum + arr[i];
        average = sum / size;
        cout << "sum: " << sum << endl
             << "average" << average;
    }
    /*for (int i = 0; i < size; i++)
    {
        
    }

    /*int arr[5]={1,2,3,4,5};
    cout<<"enter no.1: ";
    cin>>arr[0];
    cout<<"enter no.2: ";
    cin>>arr[0];
    cout<<"enter no.3: ";
    cin>>arr[0];
    cout<<"enter no.1: ";
    cin>>arr[0];
    cout<<"enter no.1: ";

    /*cout<<"element at first index: "<<arr[0]<<endl;
    cout<<"element at second index: "<<arr[1]<<endl;
    cout<<"element at third index: "<<arr[2]<<endl;
    cout<<"element at fourth index: "<<arr[3]<<endl;
    cout<<"element at fifth index: "<<arr[4]<<endl;*/
}