#include <iostream>
using namespace std;

void reverse(char ch[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(ch[start], ch[end]);
        start++;
        end--;
    }
}

// void printString(char ch[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << ch[i];
//     }
// }
int main()
{
    char ch[100];
    cout << "Enter the string: ";
    cin.getline(ch, 100);

    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    
    reverse(ch, count);
    cout << "Reverse" << endl;
    // printString(ch, count);
    cout << ch << endl; 
}