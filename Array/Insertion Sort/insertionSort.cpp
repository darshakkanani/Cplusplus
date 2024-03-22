#include <iostream>
using namespace std;

void insertionSort(int arr[],int size)
{
    int i = 1;
    while (i < size)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        i++;
    }
}

void printArray(int arr[],int size)
{
    for(int i = 0; i < size; i++)
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
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    insertionSort(arr,size);
    cout << "After sorting" << endl;
    printArray(arr,size);
}