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
    int n, k, x;
    cin >> n >> k >> x;

    if (n < k || x + 1 < k)
    {
        cout << -1 << "\n";
        return;
    }
    // int d = n - k;
    // int mul = d * x;
    // int l = k - 1;
    // int sum = (l * (l + 1)) / 2;
    // if (k == x)
    //     sum = 1;
    // int ans = sum + mul;
    // cout << ans << "\n";

    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += i;
    if (x == k)
        x -= 1;
    int l = n - k;
    for (int i = 0; i < l; i++)
        sum += x;

    cout << sum << "\n";
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