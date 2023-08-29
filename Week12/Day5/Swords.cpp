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
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a.begin() + 1, a.end());

    vector<ll> b(n + 1);
    for (int i = 1; i <= n; i++)
        b[i] = a[i] - a[i - 1];

    ll y = 0;
    for (int i = 2; i <= n; i++)
        y = __gcd(y, b[i]);

    ll x = 0;
    for (int i = 1; i <= n; i++)
        x += (a[n] - a[i]) / y;

    cout << x << " " << y << "\n";
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