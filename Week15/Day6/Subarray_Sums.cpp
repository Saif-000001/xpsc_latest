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

// Naiv Approch
// void TEST_CASES()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j <= n; j++)
//         {
//             int sum = 0;
//             for (int x = i; x < j; x++)
//                 sum += a[x];

//             if (sum == k)
//             {
//                 ans++;
//                 break;
//             }
//         }
//     }
//     cout << ans << "\n";
// }

void TEST_CASES()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0, sum = 0, i = 0, j = 0;
    while (j < n)
    {
        sum += a[j];
        while (sum >= k)
        {
            if (sum == k)
                ans++;
            sum -= a[i];
            i++;
        }
        j++;
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
    // cin>>t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}