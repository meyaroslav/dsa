#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        long long k;
        cin >> n >> k;
        map<long long, long long> cnt;

        for (int i = 0; i < n; i++) 
        {
            long long a;
            cin >> a;
            long long r = (k - a % k) % k;
            if (r != 0) cnt[r]++;
        }

        long long ans = 0;
        for (auto &p : cnt) 
        {
            long long r = p.first, c = p.second;
            long long candidate = r + (c - 1) * k;
            ans = max(ans, candidate);
        }
        
        if (!cnt.empty()) ans += 1;
        cout << ans << endl;
    }
}
