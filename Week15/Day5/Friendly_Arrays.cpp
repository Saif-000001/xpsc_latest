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
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll mx_b = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        mx_b |= b[i];
    }

    ll xor_a = 0, xor_b = 0;
    for (int i = 0; i < n; i++)
    {
        xor_a ^= a[i];
        xor_b ^= (a[i] | mx_b);
    }

    if (n & 1)
        cout << xor_a << " " << xor_b << "\n";
    else
        cout << xor_b << " " << xor_a << "\n";
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