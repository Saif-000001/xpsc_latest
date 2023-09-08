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
    string s1, s2;
    cin >> s1 >> s2;
    string ans = "";
    for (int i = 0; i < s1.size(); i++)
    {
        if ((s1[i] == '1' && s2[i] == '0') || (s1[i] == '0' && s2[i] == '1'))
            ans += '1';
        else
            ans += '0';
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
    // cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}