#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> p(n);

        for (int i = 0; i < n; i++)
        {
            cin >> p[i].first >> p[i].second;
        }

        sort(p.begin(), p.end());

        multiset<int> s;
        long long a = 0;

        for (int i = 0; i < n; i++)
        {
            auto it = s.upper_bound(p[i].second);
            a += distance(it, s.end());
            s.insert(p[i].second);
        }
        cout << a << endl;
    }
    return 0;
}
