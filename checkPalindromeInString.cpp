#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &s, int start, int end)
{
    if (start > end)
    {
        return true;
    }
    else if (!isalnum(s[start]))
    {
        return checkPalindrome(s, start + 1, end);
    }
    else if (!isalnum(s[end]))
    {
        return checkPalindrome(s, start, end - 1);
    }
    else if (tolower(s[start]) != tolower(s[end]))
    {
        return false;
    }
    return checkPalindrome(s, start + 1, end - 1);
}
bool isPalindrome(string s)
{
    if (checkPalindrome(s, 0, s.length() - 1))
    {
        return true;
    }
    return false;
}
int main()
{

    if(isPalindrome("A man, a plan, a canal: Panama")){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}