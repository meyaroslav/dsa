#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    int a[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
        
    int left = 0, sum = 0, ans = 0;
    for (int right = 0; right < n; right++)
    {
        sum += a[right];
        while (sum > t)
        {
            sum -= a[left];
            left++;
        }

        if (right - left + 1 > ans)
        {
            ans = right - left + 1;
        }      
    }

    cout << ans << endl;
    return 0;
}
