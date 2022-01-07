#include <iostream>
using namespace std;
int func(int size, int arr[], int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return 0;
}
int main()
{

    // all cin and cout are used in main function only
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key" << endl;
    cin >> key;
    cout << func(size, arr, key) << endl;
    return 0;
}