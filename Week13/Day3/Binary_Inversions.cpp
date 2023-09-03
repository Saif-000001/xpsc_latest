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

ll inversions(vector<ll> a)
{
    ll zero = 0, ans = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] == 0)
            zero++;
        else
            ans += zero;
    }
    return ans;
}

void TEST_CASES()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = inversions(a);
    // cout << ans << "\n";
    // filip 
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
            ans = max(ans, inversions(a));
            // cout<<ans<<"\n";
            a[i] = 0;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            a[i] = 0;
            ans = max(ans, inversions(a));
            // cout<<ans<<"\n";
            a[i] = 1;
            break;
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