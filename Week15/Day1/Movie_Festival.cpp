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
typedef pair<ll, ll> pii;

void TEST_CASES()
{
    ll n;
    cin >> n;

    vector<pii> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());
    ll ans = 1, current = v[0].second;
    
    for (int i = 1; i < n; i++)
    {
        if (v[i].first >= current)
        {
            current = v[i].second;
            ans++;
        }
        else
            current = min(current, v[i].second);
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
    // cin>>t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}