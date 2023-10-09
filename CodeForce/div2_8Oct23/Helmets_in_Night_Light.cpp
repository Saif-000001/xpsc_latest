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
    ll n, p;
    cin >> n >> p;
    vector<ll> a(n), b(n);
    vector<pair<ll, ll>> vp;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        vp.push_back({min(p, b[i]), a[i]});
    }

    sort(vp.begin(), vp.end());
    // for(auto i : vp)cout<<i.first<<" "<<i.second<<"\n";
    ll ans = p;
    ll per = n - 1;
    for (int i = 0; i < n-1; i++)
    {
        ans += min(per, vp[i].second) * vp[i].first;
        per -= min(per, vp[i].second);
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