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
const ll MOD = 1000000007;
const int N = 2e5 + 5;
typedef pair<int, int> pii;

void TEST_CASES()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0, cnt;

    for (int i = 2; i < n; i += 2)
    {
        cnt = 0;
        int x = s[i - 2] - '0', y = s[i - 1] - '0', z = s[i] - '0';
        if ((x | y) == z)
            cnt++;
        if ((x & y) == z)
            cnt++;
        if ((x ^ y) == z)
            cnt++;

        if (ans == 0 && i == 2)
            ans = cnt;
        else
            ans = ((ans * cnt)) % MOD;
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