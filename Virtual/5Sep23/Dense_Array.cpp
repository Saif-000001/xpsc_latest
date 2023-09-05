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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> ans;
    float mx, mn;

    for (int i = 0; i < n - 1; i++)
    {
        mx = max(a[i], a[i + 1]);
        mn = min(a[i], a[i + 1]);
        ans.push_back(a[i]);
        float d = ceil(mx / mn);
        if (d <= 2)
        {
            continue;
        }
        else
        {
            int l = 2 * mn, r = mx;
            while (l < r)
            {
                ans.push_back(l);
                l *= 2;
            }
        }
    }
    ans.push_back(a[n - 1]);
    cout << ans.size() - n << "\n";
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