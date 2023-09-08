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
    ll l, r;
    cin >> l >> r;

    for (int i = 2; i * i <= r; i++)
    {
        if (r % i == 0)
        {
            int x, y;
            x = i;
            y = r - i;
            cout << x << " " << y << "\n";
            return;
        }
    }

    if ((l != r) && (r - 3 > 0))
        cout << 2 << " " << r - 3 << "\n";
    else
        cout << -1 << "\n";
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