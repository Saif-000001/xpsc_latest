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
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> mp;
    int mn = 0, cnt = 0;
    for (int i = 0; i < d; i++)
    {
        if (mp[a[i]] == 0)
            cnt++;
        mp[a[i]]++;
    }
    mn = cnt;
    for (int i = d; i < n; i++)
    {
        mp[a[i - d]]--;
        if (mp[a[i - d]] == 0)
            cnt--;
        if (mp[a[i]] == 0)
            cnt++;
        mp[a[i]]++;
        mn = min(mn, cnt);
    }
    cout << mn << "\n";
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