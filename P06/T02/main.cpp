#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string s, t = "hello";
    int i = 0;
    cin >> s;
    for (char c : s)
    {
        if (i < 5 && c == t[i]) 
        {
           i++; 
        }
    }
    cout << (i == 5 ? "YES" : "NO");
}
