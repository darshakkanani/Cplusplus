#include <iostream>
using namespace std;

// [7, 8, 1, 2, 3] => 1 is pivot
int pivotElement(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            return arr[i+1];
        }
    }
    return 1;
}
/*
[7, 8, 1, 2, 3] => 8 is pivot
int pivotElement(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            return arr[i];
        }
    }
    return 1;
}
*/
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
    int ans = pivotElement(arr,size);
    cout << "Pivot element is: " << ans << endl;
}