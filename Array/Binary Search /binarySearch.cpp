#include <iostream>
using namespace std;

int search(int arr[], int key, int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid + 1;
        }
        int mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter trhe size of Array: ";
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int a;
    cout << "Enter the key: ";
    cin >> a;

    int ans = search(arr, a, size);

    cout << "Key faund at index no. " << ans << endl;
}