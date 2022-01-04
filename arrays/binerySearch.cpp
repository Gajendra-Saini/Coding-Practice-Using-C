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
    cout << "enter key " << endl;
    cin >> key;
    /// binery search only works if arrray is sorted
    int first = 0, last = size - 1;
    for (int i = 0; i < size; i++)
    {
        int mid = (first + last) / 2;
        if (arr[mid] > key)
        {
            last = mid - 1;
        }
        else if (arr[mid] == key)
        {
            cout << "key found at " << mid << endl;
            return 0;
        }
        else
        {
            first = mid + 1;
        }
    }
    return 0;
}