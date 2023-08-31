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
    sort(a.begin(), a.end());

    if (a[0] == a[n - 1])
    {
        cout << 0 << "\n";
        return;
    }

    for (int i = 0; i < 301; i++)
    {
        int d = abs(a[0] - i);
        bool f = true;
        for (int j = 0; j < n; j++)
        {
            if (!(a[j] + d == i || a[j] - d == i || a[j] == i))
            {
                f = false;
                break;
            }
        }

        if (f == true)
        {
            cout << d << "\n";
            return;
        }
    }
    cout << -1 << "\n";
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