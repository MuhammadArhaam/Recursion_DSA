#include <iostream>
using namespace std;
string reverseString(string str, int start, int end)
{
    if (start >= end)
    {
        return str;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    return reverseString(str, start + 1, end - 1);
}

int main()
{
    string text = "HELLO";
    text = reverseString(text, 0, text.length() - 1);
    cout << "Reversed String: " << text << endl;
    return 0;
}