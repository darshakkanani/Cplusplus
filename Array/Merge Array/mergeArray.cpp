#include<iostream>
using namespace std;

void mergeArray(int arr1[],int n, int arr2[],int m,int arr3[])
{
    int i =0 , j = 0, k = 0;
    while(i < n && j < m)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void printArray(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void scanArray(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
int main()
{
    // int arr1[5] = {1,2,5,7,8};
    int n;
    cout << "Enter the size of an Array: ";
    cin >> n;

    int arr1[100];
    cout << "Enter the elements: ";
    scanArray(arr1,n);

    // int arr2[3] = {3,6,9};
    int m;
    cout << "Enter the size of an Array: ";
    cin >> m;

    int arr2[100];
    cout << "Enter the elements: ";
    scanArray(arr2,m);

    int arr3[200];
    int f = m +n;
    mergeArray(arr1,n,arr2,m,arr3);
    cout << "After merge" << endl;
    printArray(arr3,f);
}