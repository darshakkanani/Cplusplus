#include <iostream>
using namespace std;

int search(int arr[], int key, int size)
{
    for (int i = 0; i <= 5; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the elements: ";
    int arr[100];
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int a;
    cout << "Entwer the key: ";
    cin >> a;

    int ans = search(arr, a, size);
    cout << "Key faund at index no. " << ans << endl;
}