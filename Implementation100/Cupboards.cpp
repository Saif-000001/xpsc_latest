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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    int lo = 0, l1 = 0, ro = 0, r1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            l1++;
        else
            lo++;
        if (b[i] == 1)
            r1++;
        else
            ro++;
    }
    
    // for (auto i : a)
    //     cout << i << " ";
    // cout << "\n";

    int ans = min(lo, l1) + min(ro, r1);
    cout << ans << "\n";
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