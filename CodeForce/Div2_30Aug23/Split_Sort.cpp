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
    vector<pii> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i].first;
        v[v[i].first].second = i;
    }

    // for (auto i : v)
    //     cout << i.second << " ";
    // cout << "\n";
    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        if (v[i - 1].second > v[i].second)
            ans++;
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