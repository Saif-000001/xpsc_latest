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
    vector<int> ans(n + 1);
    int cnt = 0, a = 0, b = 0;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            cnt++;
        if (s[i] == s[j] && (s[i] == '0'))
            a++;
        else if (s[i] == s[j] && (s[i] == '1'))
            b++;
        i++;
        j--;
    }
    if (cnt == 0)
        ans[0] = 1;
    int v = 0;
    if (n & 1)
        v = 1;
    for (int i = 1; i <= n; i++)
    {
        if (cnt > i)
            continue;
        int y = i - cnt;
        if ((y > (a * 2 + b * 2) + v))
            continue;
        if (y & 1)
        {
            if (n % 2 == 0)
                continue;
            else
                ans[i] = 1;
        }
        else
            ans[i] = 1;
    }
    string st;
    for (int i = 1; i <= n + 1; i++)
        st.push_back(ans[i - 1] + '0');
    cout << st << endl;
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