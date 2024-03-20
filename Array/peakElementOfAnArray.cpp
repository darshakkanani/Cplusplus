#include <iostream>
using namespace std;

int peakElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
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
    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the elements: ";
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
   
    int ans = peakElement(arr, size);
    cout << "Peak element is: " << ans << endl;
}