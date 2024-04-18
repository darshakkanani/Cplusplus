#include <iostream>
using namespace std;

void merge(int arr[], int s, int e, int m)
{
    int i, j,k;

    m = (s + e) / 2;
    int len1 = m - s + 1;
    int len2 = e - m;

    int new1[len1];
    int new2[len2];

    for (i = 0; i < len1; i++)
    {
        new1[i] = arr[s + i];
    }
    for (j = 0; j < len2; j++)
    {
        new2[j] = arr[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = s;
    while (i < len1 && j < len2)
    {
        if (new1[i] < new2[j])
        {
            arr[k++] = new1[i++];
        }
        else
        {
            arr[k++] = new2[j++];
        }
    }

    while (i < len1)
    {
        arr[k++] = new1[i++];
    }

    while (j < len2)
    {
        arr[k++] = new2[j++];
    }
}

void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;

    mergeSort(arr, s, mid);

    mergeSort(arr, mid + 1, e);

    merge(arr, s, e, mid);
}

void scan(int arr[], int size)
{
    cout << "Enter the elements of an Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void print(int arr[], int size)
{
    cout << "------------------After sorting----------------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    printf("\n");
}

int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;

    int arr[100];

    scan(arr,size);
    mergeSort(arr, 0, size - 1);
    print(arr, size);
}