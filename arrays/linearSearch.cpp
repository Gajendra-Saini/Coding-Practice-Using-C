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
    int key;
    cout << "Enter key " << endl;
    cin >> key;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "key found at " << i << endl;
            return 0;
        }
    }
    cout << "Key not found";
    return 0;
}