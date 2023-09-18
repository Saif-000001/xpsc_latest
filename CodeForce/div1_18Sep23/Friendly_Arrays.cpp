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
    ll n, m, x_min = 0;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    vector<ll> cnt(32, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x_min = x_min ^ x;
        for (int j = 31; j >= 0; j--)
        {
            if ((1 << j & x) == 1)
                cnt[j]++;
        }
    }
    for (int i = 0; i < m; i++)
        cin >> b[i];

    if (n % 2 == 0)
    {
        for (int i = 31; i >= 0; i--)
        {
            if (cnt[i] % 2 == 1)
            {
                for (int j = 0; j < m; j++)
                {
                    if (((1 << i) & b[j]) == 1)
                    {
                        for (int k = 0; k < n; k++)
                            a[k] = a[k] | b[j];
                        break;
                    }
                }
            }
        }
        ll y_min = 0;
        for (int i = 0; i < n; i++)
            y_min = y_min ^ a[i];

        cout << y_min << " " << x_min << "\n";
    }
    else
    {
        for (int i = 31; i >= 0; i--)
        {
            if (cnt[i] % 2 == 0)
            {
                for (int j = 0; j < m; j++)
                {
                    if (((1 << i) & b[j]) == 1)
                    {
                        for (int k = 0; k < n; k++)
                            a[k] = a[k] | b[j];
                        break;
                    }
                }
            }
        }
        ll y_min = 0;
        for (int i = 0; i < n; i++)
            y_min = y_min ^ a[i];

        cout << x_min << " " << y_min << "\n";
    }
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