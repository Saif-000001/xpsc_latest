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
    int grid[n + 1][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - 1; j++)
            cin >> grid[i][j];
    }

    vector<int> cnt(n + 1);
    for (int i = 1; i <= n; i++)
        cnt[grid[i][1]]++;

    int x, y;
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] > 1)
            x = i;
        if (cnt[i] == 1)
            y = i;
    }
    int row = 1;
    for (int i = 1; i <= n; i++)
    {
        if (grid[i][1] == y)
        {
            row = i;
            break;
        }
    }
    cout << x << " ";
    for (int i = 1; i <= n - 1; i++)
        cout << grid[row][i] << " ";
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