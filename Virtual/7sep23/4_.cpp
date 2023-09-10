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
    vector<int> a(n), prefix(n + 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        prefix[i] = prefix[i - 1] + a[i - 1];

    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        int target = prefix[i], cnt = 0, cur = 0;
        for (int j = 0; j < n; j++)
        {
            cur += a[j];
            if (cur > target)
            {
                cnt = -1;
                break;
            }

            if (cur == target)
            {
                cur = 0;
                cnt++;
            }
        }
        if (cur == 0)
            ans = max(ans, cnt);
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