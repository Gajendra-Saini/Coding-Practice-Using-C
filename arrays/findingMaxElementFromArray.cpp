#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter Size " << endl;
    ;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[0])
        {
            arr[0] = arr[i];
        }
    }
    cout << "max is " << arr[0] << endl;
    return 0;
}