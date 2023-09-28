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
    double n, k;
    cin >> n >> k;

    if (((int)n % 2 == 1) || k < (n / 2.0) || k > (n * 10) / 2.0)
    {
        cout << -1 << "\n";
        return;
    }
    vector<ll> ans;
    ll sum = 0;
    for (int i = 1; i < n; i++)
    {
        ans.push_back(i);
        sum += i;
    }

    k -= sum;
    cout << k << " ";
    for (auto i : ans)
        cout << i << " ";
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