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
    vector<pii> p;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        p.push_back({x, i});
    }

    for (auto i : mp)
    {
        if (i.second == 1)
        {
            cout << -1 << "\n";
            return;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (p[i].first == p[i + 1].first)
        {
            swap(p[i].second, p[i + 1].second);
        }
    }

    for (auto i : p)
        cout << i.second << " ";
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