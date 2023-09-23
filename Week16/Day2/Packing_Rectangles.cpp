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
bool pre(ll w, ll h, ll n, ll x)
{
    ll cnt = 0;
    ll n1 = (x / w);
    ll n2 = (x / h);
    cnt = n1 * n2;
    return cnt >= n;
}

void TEST_CASES()
{
    ll w, h, n;
    cin >> w >> h >> n;
    ll l = 0, r = 1, mid;
    while (pre(w, h, n, r) == false)
        r *= 2;

    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;
        if (pre(w, h, n, mid))
            r = mid;
        else
            l = mid;
    }

    cout << r << "\n";
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