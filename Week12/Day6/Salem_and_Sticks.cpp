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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 1e9;
    ll t = 0;
    for (ll i = 1; i < 101; i++)
    {
        ll cost = 0, y = 0;
        for (ll j = 0; j < n; j++)
            cost += max(y, abs(a[j] - i) - 1);
        if (cost < ans)
        {
            ans = cost;
            t = i;
        }
    }

    
    cout << t << " " << ans << "\n";
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