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
    // ll n;
    // cin >> n;
    // vector<ll> a(n);
    // vector<ll> cnt{n+1, 0};
    // bool f = false;
    // vector<ll> b, c;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] <= n)
    //     {
    //         if (cnt[a[i]] == 0)
    //             cnt[a[i]] = 1;
    //         else
    //             b.push_back(a[i]);
    //     }
    //     else
    //         b.push_back(a[i]);
    // }

    // for(auto i : b)cout<<i<<" ";
    // cout<<"\n";

    // for (int i = 1; i <= n; i++)
    // {
    //     if (cnt[i] == 0)
    //         c.push_back(i);
    // }

    // sort(b.begin(), b.end());
    // ll ans = b.size();

    // for (int i = 0; i < ans; i++)
    // {
    //     if (2 * c[i] >= b[i])
    //     {
    //         f = true;
    //         break;
    //     }
    // }

    // if (f == false)
    //     cout << ans << "\n";
    // else
    //     cout << -1 << "\n";

    int n, i;
    cin >> n;
    bool f = 0;

    vector<ll> v(n + 1, false);

    vector<ll> a(n);
    vector<ll> b, c;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= n)
        {
            if (v[a[i]] == false)
                v[a[i]] = true;
            else
                b.push_back(a[i]);
        }
        else
            b.push_back(a[i]);
    }

    for (i = 1; i <= n; i++)
    {
        if (v[i] == false)
            c.push_back(i);
    }
    sort(b.begin(), b.end());

    ll m = b.size();

    for (i = 0; i < m; i++)
    {
        if (2 * c[i] >= b[i])
        {
            f = 1;
            break;
        }
    }

    if (f == 0)
    {
        cout << m << "\n";
    }
    else
    {
        cout << "-1\n";
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