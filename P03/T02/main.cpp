#include <iostream>
#include <string>

using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    int x[1000], y[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }  

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                swap(x[j], x[j + 1]);
                swap(y[j], y[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s <= x[i])
        {
            cout << "NO" << endl;
            return 0;
        }

        s += y[i];
    }

    cout << "YES" << endl;
    return 0;
}
