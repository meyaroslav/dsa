#include <iostream>

using namespace std;

bool lucky(int x) 
{
    while (x) 
    {
        if (x % 10 != 4 && x % 10 != 7) 
        {
            return false;
        }
        x /= 10;
    }
    return true;
}

int main() 
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && lucky(i)) 
        { 
            cout << "YES";
            return 0; 
        }
    }
    cout << "NO";
}
