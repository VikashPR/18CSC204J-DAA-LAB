#include <iostream>
using namespace std;
bool hasAlternateChars(string str)
{
    for (int i = 0; i < str.length() - 2; i++)
    {
        if (str[i] != str[i + 2])
        {
            return false;
        }
    }
    if (str[0] == str[1])
        return false;
    return true;
}
int main()
{
    string str = "afds";
    if (hasAlternateChars(str))
    {
        cout << "Valid String";
    }
    else
    {
        cout << "Not a Valid String";
    }
}