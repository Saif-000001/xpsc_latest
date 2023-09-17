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

    int pir = 0, big = 0;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (s[l] == s[r])
            pir += 2;
        else
            big++;

        l++, r--;
    }

    string ans = "";
    for (int i = 0; i <= n; i++)
    {
        int t = i;
        t -= big;

        if (t < 0)
        {
            ans.push_back('0');
            continue;
        }

        t = max((t % 2), t - pir);
        t = max(0, t - (n % 2));

        if (t == 0)
            ans.push_back('1');
        else
            ans.push_back('0');
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