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
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    vector<int> b(901, 0);
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
        b[a[i]] = 1;
    }

    int cnt = 0;
    for (int i = 0; i < k; i++)
    {
        cout << a[i] << " ";
        for (int j = 1; j < n; j++)
        {
            cnt++;
            while (b[cnt] == 1)
            {
                cnt++;
            }
            cout << cnt << " ";
        }
        cout << '\n';
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