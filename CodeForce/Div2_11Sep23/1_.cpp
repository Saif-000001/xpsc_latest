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
    vector<pii> vp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vp.push_back({x, i});
    }
    sort(vp.begin(), vp.end());
    int m = n;
    for (int i = 0; i < n; i++)
    {
        vp[i].first = m;
        m--;
    }

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[vp[i].second] = vp[i].first;
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