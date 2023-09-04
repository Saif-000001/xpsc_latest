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

// void TEST_CASES()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     vector<int> a;
//     multiset<int> us;
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == '0')
//         {
//             cnt++;
//             a.push_back(i + 1);
//             us.insert(i + 1);
//         }
//     }

//     if (cnt == n || cnt == 0)
//     {
//         cout << cnt << "\n";
//         return;
//     }

//     sort(a.begin(), a.end());

//     for (int i = 0; i < n; i++)
//     {
//         int x = a[i];
//         int b = x * 2;
//         if (us.find(b) != us.end())
//         {
//             us.erase(x);
//             // us.insert(x);
//         }
//     }
//     ll sum = 0;
//     for (auto i : us)
//         sum += i;

//     cout << sum << "\n";
// }

void TEST_CASES()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    s = ' ' + s;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j += i)
        {
            if (s[j] == '1')
                break;
            if (s[j] == '0')
            {
                ans += i;
                s[j] = '2';
            }
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
    cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}
