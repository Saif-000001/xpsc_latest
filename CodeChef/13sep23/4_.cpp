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

bool consecutive(vector<ll> a)
{
    for (int i = 1; i < a.size(); i++)
    {
        if ((a[i - 1] < a[i] && a[i] > a[i + 1]) || a[i - 1] > a[i] && a[i] < a[i + 1])
            continue;
        else
            return false;
    }
    return true;
}

void TEST_CASES()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    int m;
    if (n & 1)
        m = n / 2 + 1;
    else
        m = n / 2;

    vector<ll> ans;
    int l = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            ans.push_back(a[l]);
            l++;
        }
        else
        {
            ans.push_back(a[m]);
            m++;
        }
    }

    if (consecutive(ans))
    {
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    else
        cout << -1 << "\n";
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