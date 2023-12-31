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
    int l, m, n, d, k;
    cin >> l >> m >> n >> d >> k;
    ll ans = 0;
    for (int i = 1; i <= k; i++)
    {
        if (i % l == 0)
            ans++;
        else if (i % m == 0)
            ans++;
        else if (i % n == 0)
            ans++;
        else if (i % d == 0)
            ans++;
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
    // cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}