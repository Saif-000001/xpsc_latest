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
    cin >> n >> k;
    vector<ll> a(n);
    ll mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    ll low = mx;
    ll high = 1e18;
    ll mxSum = 1e18;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        int cnt = 1;
        ll sum = 0;
        int i = 0;
        while (i < n)
        {
            if (sum + a[i] > mid)
            {
                sum = 0;
                cnt++;
            }
            sum += a[i];
            i++;
        }
        if (cnt > k)
            low = mid + 1;
        else
        {
            if (mid < mxSum)
                mxSum = mid;
            high = mid - 1;
        }
    }
    cout << mxSum << "\n";
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