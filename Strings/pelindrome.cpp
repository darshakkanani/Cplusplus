#include <iostream>
using namespace std;

bool pelindrome(char ch[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        if (ch[start] != ch[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

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

    int ans = pelindrome(ch, count);

    if (ans)
    {
        cout << "Pelindrome" << endl;
    }
    else
    {
        cout << "Not a Pelindrome" << endl;
    }
}