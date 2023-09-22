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

int aquarium(vector<ll> a, ll mid, ll k)
{
    ll sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < mid)
            sum += mid - a[i];
    }

    return sum <= k;
}

void TEST_CASES()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, h = INT_MAX, ans = INT_MAX;
    while (l <= h)
    {
        ll mid = l + (h - l) / 2;

        if (aquarium(a, mid, k))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            h = mid - 1;
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