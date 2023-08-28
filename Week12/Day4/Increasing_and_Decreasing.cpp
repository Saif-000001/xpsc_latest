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
    int x, y, n;
    cin >> x >> y >> n;

    vector<int> ans(n);
    ans[0] = x, ans[n - 1] = y;
    int d = 1;
    for (int i = n - 2; i >= 1; i--)
    {
        ans[i] = ans[i + 1] - d;
        d++;
    }

    bool f = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (ans[i] >= ans[i + 1])
        {
            f = false;
        }
    }

    for (int i = 0; i < n - 2; i++)
    {
        int p = ans[i + 1] - ans[i];
        int q = ans[i + 2] - ans[i + 1];
        if (p <= q)
        {
            f = false;
        }
    }

    if (f == false)
    {
        cout << -1 << "\n";
        return;
    }

    for (auto i : ans)
        cout << i << " ";
    cout << "\n";
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