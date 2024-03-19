#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key: ";
    cin >> key;

    int first = firstOcc(arr, size, key);
    int last = lastOcc(arr, size, key);

    cout << "First occurance: " << first << " and "
         << "Last occurance: " << last << endl;
}

/*
#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {
    int s = 0;
    int e = size - 1;
    int ans = -1; // Initialize ans to -1 for cases when key is not found

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid; // Update ans when key is found
            e = mid - 1; // Look for key in the left half
        } else if (arr[mid] < key) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int size, int key) {
    int s = 0;
    int e = size - 1;
    int ans = -1; // Initialize ans to -1 for cases when key is not found

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid; // Update ans when key is found
            s = mid + 1; // Look for key in the right half
        } else if (arr[mid] < key) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key: ";
    cin >> key;

    int first = firstOcc(arr, size, key);
    int last = lastOcc(arr, size, key);

    if (first != -1 && last != -1) { // If key is found at least once
        cout << "First occurrence: " << first << " and " << "Last occurrence: " << last << endl;
    } else {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}
*/