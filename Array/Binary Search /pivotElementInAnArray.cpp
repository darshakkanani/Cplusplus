#include <iostream>
using namespace std;

int pivotElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] > arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans = pivotElement(arr, size);
    cout << "Pivot element is at index: " << ans << endl;
    cout << "Pivot element value is: " << arr[ans] << endl;
    return 0;
}
