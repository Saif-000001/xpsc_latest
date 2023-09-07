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
    ll n, h;
    cin >> n >> h;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll l = 1, r = h;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll demage = 0;
        for (int i = 0; i < n - 1; i++)
            demage += min(a[i + 1] - a[i], mid);
        demage += mid;
        if (demage >= h)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << l << "\n";
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