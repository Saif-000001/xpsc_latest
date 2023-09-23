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
    vector<int> a(10000006);
    int idx = 1;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        while (x--)
        {
            a[idx] = i;
            idx++;
        }
    }

    int m;
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        cout << a[x] << "\n";
    }
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