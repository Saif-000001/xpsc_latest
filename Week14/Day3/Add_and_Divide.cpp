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
    int ans = INT_MAX;
    for (int i = 0; i <= 100; i++)
    {
        int n = b + i, cnt = i, tmp = a;
        if (n == 1)
            continue;
        while (tmp)
        {
            tmp /= n;
            cnt++;
        }
        ans = min(ans, cnt);
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