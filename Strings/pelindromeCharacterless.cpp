#include <iostream>
using namespace std;

char toLower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a'; // Convert uppercase to lowercase
    }
    else
    {
        return ch;
    }
}
bool pelindrome(char ch[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        if (toLower(ch[start]) != toLower(ch[end]))
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
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