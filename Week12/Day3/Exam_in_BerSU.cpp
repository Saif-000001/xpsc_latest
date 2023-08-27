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
const int T = 100;

void TEST_CASES()
{
    int n, m;
    cin >> n >> m;
    vector<int> t(n), count(T + 1, 0);
    for (int i = 0; i < n; i++)
        cin >> t[i];

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int d = sum + t[i] - m, k = 0;
        if (d > 0)
        {
            for (int j = T; j > 0; j--)
            {
                int x = j * count[j];
                if (d <= x)
                {
                    k += (d + j - 1) / j;
                    break;
                }
                k += count[j];
                d -= x;
            }
        }
        sum += t[i];
        count[t[i]]++;
        cout << k << " ";
    }
    cout<<"\n";
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