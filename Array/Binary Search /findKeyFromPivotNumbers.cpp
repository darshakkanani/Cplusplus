#include <iostream>
using namespace std;

int keyR(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }

    // search in the first half
    int s1 = 0;
    int e1 = mid;
    while (s1 <= e1)
    {
        int mid1 = s1 + (e1 - s1) / 2;
        if (arr[mid1] == key)
        {
            return mid1;
        }
        else if (arr[mid1] < key)
        {
            s1 = mid1 + 1;
        }
        else
        {
            e1 = mid1 - 1;
        }
        mid1 = s1 + (e1 - s1) / 2;
    }

    // search in the second half
    s1 = mid + 1;
    e1 = size - 1;
    while (s1 <= e1)
    {
        int mid1 = s1 + (e1 - s1) / 2;
        if (arr[mid1] == key)
        {
            return mid1;
        }
        else if (arr[mid1] < key)
        {
            s1 = mid1 + 1;
        }
        else
        {
            e1 = mid1 - 1;
        }
        mid1 = s1 + (e1 - s1) / 2;
    }
    return -1; // return -1 if key is not found
}
int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key: ";
    cin >> key;

    int ans = keyR(arr,size,key);
    cout << "Key index: " << ans << endl;
}