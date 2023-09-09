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
    ll n, x;
    cin >> n >> x;
    multiset<ll> ms;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }
    int ans = 0;
    while (ms.size())
    {
        int i = *ms.begin();
        while (1)
        {
            auto next = ms.find(i * x);
            if (next != ms.end())
            {
                ans += 2;
                ms.erase(ms.find(i));
                ms.erase(next);
                break;
            }
            ms.erase(ms.find(i));
            break;
        }
    }
    cout << n - ans << "\n";
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