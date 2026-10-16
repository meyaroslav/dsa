#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;
    int r = max({
        a + b + c,
        a * b * c,
        a + b * c,
        a * b + c,
        (a + b) * c,
        a * (b + c)});
    cout << r << endl;
    return 0;
}