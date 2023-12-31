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
    ll r, c, ans;
    cin >> r >> c;
    if (r > c)
    {
        if (r % 2 == 0)
        {
            ans = r * r - (c - 1);
            cout << ans << "\n";
        }
        else
        {
            ans = ((r - 1) * (r - 1)) + 1 + (c - 1);
            cout << ans << "\n";
        }
    }
    else
    {
        if (c % 2 == 0)
        {
            ans = ((c - 1) * (c - 1)) + 1 + (r - 1);
            cout << ans << "\n";
        }
        else
        {
            ans = (c * c) - (r - 1);
            cout << ans << "\n";
        }
    }
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