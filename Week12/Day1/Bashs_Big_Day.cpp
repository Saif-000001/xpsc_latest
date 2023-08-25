#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;
typedef pair<int, int> pii;
void TEST_CASES()
{
    int n;
    cin >> n;
    unordered_map<int, int> cnt;
    while (n--)
    {
        int x;
        cin >> x;
        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                cnt[i]++;
                while (x % i == 0)
                    x /= i;
            }
        }
        if (x > 1)
            cnt[x]++;
    }

    int ans = 1;
    for (auto &i : cnt)
        ans = max(ans, i.second);
    cout << ans << "\n";
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}