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
    ll n, k;
    cin >> n;
    vector<pii> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i].first = i;
        cin >> a[i].second;
    }
    cin >> k;
    vector<pii> b;
    for (int i = 0; i < n; i++)
    {
        while (b.size() && b.back().second >= a[i].second)
        {
            b.pop_back();
        }
        b.push_back(a[i]);
    }
    a = b;
    vector<ll> ans(n);
    ll last_index = -1;
    for (int i = 0; i < a.size(); i++)
    {
        ll index = a[i].first;
        ll pay = a[i].second - (i - 1 >= 0 ? a[i - 1].second : 0);
        ll add = k / pay;
        if (i - 1 >= 0)
            add = min(add, ans[last_index]);
        k -= add * pay;
        for (int j = last_index + 1; j <= index; j++)
        {
            ans[j] += add;
        }
        last_index = index;
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
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