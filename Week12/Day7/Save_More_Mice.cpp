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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k);
    for (int i = 0; i < k; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    ll ans = 0, sum = 0;

    for (int i = k - 1; i >= 0; i--)
    {
        sum += n - a[i];

        if (sum < n)
            ans++;
        else
            break;
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