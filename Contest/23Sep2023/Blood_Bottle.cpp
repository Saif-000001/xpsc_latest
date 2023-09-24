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
    int o = 0, ans = 0;
    float cnt = 0;
    for (auto i : s)
    {
        if (i == '1')
        {
            o++;
            cnt++;
        }
        else
        {
            ans = max(ans, o);
            o = 0;
        }
    }
    ans = max(ans, o);
    int con = ceil(float(cnt) / 2);
    ans = max(ans, con);
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