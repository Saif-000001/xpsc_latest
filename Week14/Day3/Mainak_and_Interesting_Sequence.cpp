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
    ll n, m;
    cin >> n >> m;
    if (n > m)
    {
        cout << "NO\n";
        return;
    }

    if ((n & 1) == 0 && (m & 1))
    {
        cout << "NO\n";
        return;
    }

    int sum = 0;
    vector<int> ans;
    if ((n & 1) == 0 && (m & 1) == 0)
    {
        cout << "YES\n";
        for (int i = 1; i <= n - 2; i++)
        {
            ans.push_back(1);
            sum++;
        }
        ans.push_back((m - sum) / 2);
        ans.push_back(ans.back());
    }

    if (((n & 1) && (m & 1)) || ((n & 1) && (m & 1) == 0))
    {
        cout << "YES\n";
        for (int i = 1; i <= n - 1; i++)
        {
            ans.push_back(1);
            sum++;
        }
        ans.push_back(m - sum);
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