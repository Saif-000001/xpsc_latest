// Johnny and Ancient Computer
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
    ll a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << "\n";
    }
    else
    {
        if (a < b)
            swap(a, b);
        int ans = 0;
        while (a > b)
        {
            if (((a / 8) >= b) && (a % 8 == 0))
            {
                ans += 1;
                a /= 8;
            }
            else if (((a / 4 )>= b) && (a % 4 == 0))
            {
                ans += 1;
                a /= 4;
            }
            else if (((a / 2 )>= b) && (a % 2 == 0))
            {
                ans += 1;
                a /= 2;
            }
            else
                break;
        }
        if (a == b)
            cout << ans << "\n";
        else
            cout << -1 << "\n";
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