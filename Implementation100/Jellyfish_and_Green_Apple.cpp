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
    ll n, m;
    cin >> n >> m;
    ll g = __gcd(n, m);
    ll r = n % m;
    ll bin = m / g;
    if (__builtin_popcount(bin) > 1)
    {
        cout << -1 << "\n";
        return;
    }

    ll ans = 0;
    while (r)
    {
        ans += r;
        r *= 2;
        if (r >= m)
            r -= m;
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