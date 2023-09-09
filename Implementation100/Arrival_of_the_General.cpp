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
    int mx = 0;
    int mn = INT_MAX;
    int m = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)
        {
            mx = a[i];
            m = i;
        }

        if (a[i] <= mn)
        {
            mn = a[i];
            s = i;
        }
    }
    if (m > s)
        s++;
    cout << m + n - 1 - s << "\n";
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