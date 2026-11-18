#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long p, q, r = 0;
        cin >> p;
        while (n--) 
        {
            cin >> q;
            r = max(r, p * q);
            p = q;
        }
        cout << r << endl;
    }
}
