#include <iostream>
using namespace std;
int main()
{
    // int size;
    // cout << "Enter the size of string: ";
    // cin >> size;
    char ch[5] = {'a', 'b', 'c', '\0', 'e'};
    char ch1[5] = {'a', 'b', 'c', 'd', 'e'};
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> ch[i];
    // }
    // cout << "------------" << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << ch[i];
    // }
    cout << sizeof(ch1) << endl;
    cout << ch << endl;
}