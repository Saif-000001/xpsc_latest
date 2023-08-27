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
    string s;
    cin >> s;
    vector<pair<int, char>> vp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vp.push_back({x, s[i]});
    }
    ll ans = 0;
    int mn;
    int i = n - 1;
    while (i >= 0)
    {
        if (vp[i].second == '1')
        {
            mn = vp[i].first;
            while (i >= 0)
            {
                mn = min(mn, vp[i].first);
                if (vp[i].second == '1')
                {
                    ans += vp[i].first;
                    i--;
                }
                else
                {
                    ans += vp[i].first;
                    ans -= mn;
                    i--;
                    break;
                }
            }
        }
        else
            i--;
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