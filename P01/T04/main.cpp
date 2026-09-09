#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool palindrome(const string& s) 
{
    int left = 0;
    int right = s.size() - 1;

    while (left < right) 
    {
        if (!isalnum(s[left])) { left++; continue; }
        if (!isalnum(s[right])) { right--; continue; }

        if (tolower(s[left]) != tolower(s[right])) 
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() 
{
    string s = "A man, a plan, a canal, Panama";
    cout << (palindrome(s) ? "Палиндром" : "Не палиндром") << endl;
    return 0;
}
