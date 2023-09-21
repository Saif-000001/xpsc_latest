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

int diff(char a, char b)
{
    int d = abs(a - b);
    return min(d, 10 - d);
}

void TEST_CASES()
{
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;

    int ans = INT_MAX;
    for (int i = 0; i <= n - m; i++)
    {
        int d = 0;
        for (int j = 0; j < m; j++)
            d += diff(s1[i + j], s2[j]);
        ans = min(ans, d);
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