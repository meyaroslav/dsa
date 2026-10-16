#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << 2 << endl;

        int a = n;
        for (int i = n - 1; i >= 1; i--)
        {
            cout << a << " " << i << endl;
            a = (a + i +1) / 2;
        }
    }

    return 0;
}
