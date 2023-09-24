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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    int xn = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        xn ^= a[i];
    }
    int xm = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        xm |= b[i];
    }

    int xr = 0;
    for (int i = 0; i < n; i++)
        xr ^= (a[i] | xm);

    cout << min(xn, xr) << " " << max(xn, xr) << "\n";
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