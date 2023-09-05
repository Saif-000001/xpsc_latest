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
const ll N = 1e12 ;
typedef pair<int, int> pii;

void TEST_CASES()
{
    ll x;
    cin >> x;
    unordered_set<ll> us;
    for (ll i = 1; i * i * i <= N; i++)
        us.insert(i * i * i);

    for (ll i = 1; i * i * i <= x; i++)
        if (us.count(x - i * i * i))
        {
            cout << "YES\n";
            return;
        }

    cout << "NO\n";
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