#include<iostream>
using namespace std;

void selectionSort(char arr[],int size)
{
    for(int i = 0; i < size-1;i++)
    {
        int minIndex = i;
        for(int j = i+1; j < size; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

void printArray(char arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) { 
        cout << arr[i] << " "; 
    } 
} 

int main()
{
    int size;
    cout << "Enter the size of an Array: ";
    cin >> size;

    char arr[100];
    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr,size);
    cout << "After sorting: " << endl;
    printArray(arr,size);
}