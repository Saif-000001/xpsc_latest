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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<ll> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (k & 1)
    {
        if (a[0] < b[m - 1])
        {
            swap(a[0], b[m - 1]);
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
        }
    }
    else
    {
        if (a[0] < b[m - 1])
        {
            swap(a[0], b[m - 1]);
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
        }
        if (b[0] < a[n - 1])
        {
            swap(b[0], a[n - 1]);
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
        }
    }
    ll ans = 0;
    for (auto i : a)
        ans += i;
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