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
    vector<pii> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first;
        p[i].second = i;
    }

    sort(p.begin(), p.end());
    ll m = n;
    for (int i = 0; i < n; i++)
    {
        p[i].first = m;
        m--;
    }

    vector<ll> ans(n);
    for (int i = 0; i < n; i++)
        ans[p[i].second] = p[i].first;

    for (auto i : ans)
        cout << i << " ";
    cout << "\n";
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