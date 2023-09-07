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
    int n;
    cin >> n;

    if (n > 45)
    {
        cout << -1 << "\n";
        return;
    }

    if (n < 10)
    {
        cout << n << "\n";
        return;
    }

    int ans = 0, dec = 1;
    for (int i = 9; i >= 1; i--)
    {
        if (n >= i)
        {
            n -= i;
            ans += i * dec;
            dec *= 10;
        }
    }
    cout << ans << "\n";

    // int n;
    // cin >> n;

    // if (n > 45)
    // {
    //     cout << -1 << "\n";
    //     return;
    // }

    // int ans = 0, dec = 1;
    // for (int i = 9; i >= 1; i--)
    // {
    //     if (n >= i)
    //     {
    //         n -= i;
    //         ans += i;
    //         ans *= 10;
    //     }
    // }
    // cout << ans << "\n";
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