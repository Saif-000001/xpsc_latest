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
    vector<int> position[n + 1];
    int ans[n + 1];
    int m = n;
    while (m--)
    {
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            position[x].push_back(i);
        }
    }

    for (int i = 1; i <= n; i++)
        sort(position[i].begin(), position[i].end());

    for (int i = 1; i <= n; i++)
    {
        if (position[i][n - 2] == n - 1)
        {
            if (position[i][0] == n - 1)
                ans[n] = i;
            else
                ans[n - 1] = i;
        }
        else
            ans[position[i][n - 2]] = i;
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
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