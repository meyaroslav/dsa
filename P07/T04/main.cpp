#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int n, p[2001], r = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        cin >> p[i];
    }
    for (int i = 1; i <= n; i++) 
    {
        int c = 0;
        for (int v = i; v != -1; v = p[v]) 
        {
            c++;
        }
        r = max(r, c);
    }
    cout << r;
}
