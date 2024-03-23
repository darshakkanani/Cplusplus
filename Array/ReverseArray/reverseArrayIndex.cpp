#include <iostream>
using namespace std;

void reverseArray(int arr[], int size,int i)
{
    int start = i + 1;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter the size of an Array: ";
    cin >> size;

    int arr[100];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int i;
    cout << "Enter the index: ";
    cin >> i;

    reverseArray(arr, size,i);
    cout << "After reverse" << endl;
    printArray(arr, size);
}