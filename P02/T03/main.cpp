#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        long long x;
        cin >> x;
        long long b = x % 11;

        if (b * 111 <= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
