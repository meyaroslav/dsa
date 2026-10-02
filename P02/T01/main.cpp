#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    long long cur = 1, total = 0;

    for (int i = 0; i < m; i++) 
    {
        int a;
        cin >> a;
        total += ((a - cur) % n + n) % n;
        cur = a;
    }

    cout << total << endl;
}
