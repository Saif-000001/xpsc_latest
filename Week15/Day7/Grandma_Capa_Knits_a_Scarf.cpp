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
    string s;
    cin >> n >> s;
    int ans = n + 1;
    for (int c = 0; c < 26; ++c)
    {
        int l = 0, r = n - 1, cnt = 0;
        while (l <= r)
        {
            if (s[l] == s[r])
                l++, r--;

            else if (s[l] == char('a' + c))
                cnt++, l++;
            else if (s[r] == char('a' + c))
                cnt++, r--;
            else
            {
                cnt = n + 1;
                break;
            }
        }
        ans = min(ans, cnt);
    }
    if (ans == n + 1)
        ans = -1;
    cout << ans << '\n';
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