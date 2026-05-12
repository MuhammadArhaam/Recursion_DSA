#include<iostream>
using namespace std;
bool isPalindrome(string str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (str[start] != str[end])
    {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}
int main()
{
    string text = "LEVEL";
    int start = 0, end = text.length() - 1;
    if (isPalindrome(text, start, end) == true)
    {
        cout << text <<" is a Palindrome" << endl;
    }
    else
    {
        cout << text << " is not a Palindrome" << endl;
    }
}