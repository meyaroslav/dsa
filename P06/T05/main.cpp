#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long x = min({a, c, d});
    long long y = min(a - x, b);
    cout << x * 256 + y * 32;
}
