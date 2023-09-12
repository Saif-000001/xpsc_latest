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
const int N = 2e5 +5;
typedef pair<int,int> pii;

void TEST_CASES()
{
    int n;
    cin >> n;
    vector<int> a[1005];
 
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a[x].push_back(i);
    }
 
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) == 1)
                pairs[i].push_back(j);
        }
    }
    int ans = -1;
    for (int i = 1; i <= 1000; i++)
    {
        for (auto j : pairs[i])
        {
            if (!a[i].empty() && !a[j].empty())
                ans = max(ans, a[i].back() + a[j].back());
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
    int t=1;
    cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}