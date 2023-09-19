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
typedef pair<ll, ll> pii;

// Naiv Approch
// void TEST_CASES()
// {
//     ll n, x;
//     cin >> n >> x;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (a[i] + a[j] + a[k] == x)
//                 {
//                     cout << i + 1 << " " << j + 1 << " " << k + 1 << "\n";
//                     return;
//                 }
//             }
//         }
//     }

//     cout << "IMPOSSIBLE\n";
// }

void TEST_CASES()
{
    ll n, x;
    cin >> n >> x;
    vector<pii> a;
    for (int i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        a.push_back({m, i + 1});
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        ll x1 = x - a[i].first;
        int k = n - 1;
        for (int j = i + 1; j < k; j++)
        {
            while (a[j].first + a[k].first > x1)
                k--;

            if (j < k && a[j].first + a[k].first == x1)
            {
                cout << a[i].second << " " << a[j].second << " " << a[k].second << "\n";
                return;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
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