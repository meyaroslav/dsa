#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        int b = 1;
        while (b * b < a)
        {
            b++;
        }
        
        bool prime = true;
        for (int j = 2; j * j <= b; j++)
        {
            if (b % j == 0)
            {
                prime = false;
                break;
            }
        }

        if (b * b == a && prime && b > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }         
    }

    return 0;
}