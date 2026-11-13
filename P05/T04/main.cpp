#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[5000], b[5000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
        
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
        
    int last = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] >= last)
        {
            last = b[i];
        }   
        else
        {
            last = a[i];
        }
    }

    cout << last << endl;
    return 0;
}