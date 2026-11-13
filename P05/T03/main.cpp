#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
        
    int last = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            ans++;
            last = 0;
        }
        else if (a[i] == 1)
        {
            if (last == 1)
            {
                ans++;
                last = 0;
            }
            else
            {
                last = 1;
            }
        }
        else if (a[i] == 2)
        {
            if (last == 2)
            {
                ans++;
                last = 0;
            }
            else
            {
                last = 2;
            }    
        }
        else
        {
            if (last == 1)
            {
                last = 2;
            }    
            else
            {
                last = 1;
            }  
        }
    }

    cout << ans << endl;
    return 0;
}