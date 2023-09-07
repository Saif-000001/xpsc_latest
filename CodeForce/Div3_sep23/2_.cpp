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
const int MOD = 1000000007;
const int N = 2e5 + 5;
typedef pair<int, int> pii;

void TEST_CASES()
{
    int n;
    cin >> n;
    vector<int> d(n), s(n);
    for (int i = 0; i < n; i++)
        cin >> d[i] >> s[i];

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 3)
        {
            if (s[i] & 1)
                ans = min(ans, d[i] + (s[i]) / 2);
            else
                ans = min(ans, d[i] + ((s[i]) / 2 - 1));
        }
        else
            ans = min(ans, d[i]);
    }
    cout << ans << "\n";
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}