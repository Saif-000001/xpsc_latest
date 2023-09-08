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

int lights(int n)
{
    if (n == 0)
        return 1;
    return 0;
}
void TEST_CASES()
{
    int grid[3][3], initial[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] & 1)
                grid[i][j] = 1;
            else
                grid[i][j] = 0;
            initial[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] == 1)
            {
                initial[i][j] = lights(initial[i][j]);

                if (i > 0)
                    initial[i - 1][j] = lights(initial[i - 1][j]);
                if (j > 0)
                    initial[i][j - 1] = lights(initial[i][j - 1]);
                if (i < 2)
                    initial[i + 1][j] = lights(initial[i + 1][j]);
                if (j < 2)
                    initial[i][j + 1] = lights(initial[i][j + 1]);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << initial[i][j];
        cout << "\n";
    }
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