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
    string s;
    cin >> s;
    ll p, n = s.size();
    cin >> p;
    ll k = 0;
    p--;
    while (p >= n - k)
    {
        p = p - (n - k);
        k++;
    }
    // cout << p << " " << k << "\n";
    string ans;
    for (int i = 0; i < n; i++)
    {
        while (!ans.empty() && ans.back() > s[i] && k != 0)
        {
            ans.pop_back();
            k--;
        }
        ans += s[i];
    }
    // cout<<ans<<"\n";
    cout << ans[p];
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