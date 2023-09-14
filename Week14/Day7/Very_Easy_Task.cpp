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
bool is_possible(int t, int n, int x, int y)
{
    if (t < min(x, y))
        return false;

    int cnt = 1;
    t -= min(x, y);
    cnt += t / x + t / y;
    return cnt >= n;
}
void TEST_CASES()
{
    int n, x, y;
    cin >> n >> x >> y;
    int l = 0, r = max(x, y)*n, mid;
    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;
        if (is_possible(mid, n, x, y))
            r = mid;
        else
            l = mid;
    }
    cout << r << "\n";
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