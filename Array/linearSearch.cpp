#include<iostream>
using namespace std;

int search(int arr[],int key)
{
    for(int i = 0; i <= 5; i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a;
    cout << "Entwer the key: ";
    cin >> a;

    int arr[5] = {1,2,3,6,78};

    int ans = search(arr,a);
    cout << "Key faund at index no. " << ans << endl;
}