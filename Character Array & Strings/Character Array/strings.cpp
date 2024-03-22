#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of string: ";
    cin >> size;
    char ch[100];
    for (int i = 0; i < size; i++)
    {
        cin >> ch[i];
    }
    cout << "------------" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << ch[i];
    }
}