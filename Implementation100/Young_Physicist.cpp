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
    int x[n], y[n], z[n];
    int sx = 0, sy = 0, sz = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> z[i];
        sx += x[i], sy += y[i], sz += z[i];
    }
    // cout << sx << " " << sy << " " << sz << "\n";
    if (((sx == sy) && (sy == sz) && sx == 0))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}