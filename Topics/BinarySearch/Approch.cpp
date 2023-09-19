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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // search element position
    // auto k = lower_bound(a.begin(), a.end(), x) - a.begin();
    // if (k < n && a[k] == x)
    //     cout << k + 1 << "\n";

    // count element
    // auto c = lower_bound(a.begin(), a.end(), x);
    // auto b = upper_bound(a.begin(), a.end(), x);
    // cout << b - c << "\n";

    // shorter code
    auto r = equal_range(a.begin(), a.end(), x);
    cout << r.second - r.first << "\n";

    // Alternative Binary Search
    // int k = 0;
    // for (int i = n / 2; i >= 1; i /= 2)
    // {
    //     while (k + i < n && a[k + i] <= x)
    //         k += i;
    // }

    // if (a[k] == x)
    //     cout << k+1 << "\n";
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