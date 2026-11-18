#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int x, a[4] = {0};
        cin >> x >> a[1] >> a[2] >> a[3];
        int c = 0;
        while (x) 
        { 
            x = a[x]; c++; 
        }
        cout << (c == 3 ? "YES" : "NO") << endl;
    }
}
