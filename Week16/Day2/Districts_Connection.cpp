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
    int a[n];
    unordered_map<int, int> mp;
    int m = 0;
    int second = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;

        m = max(m, mp[a[i]]);
    }

    if (m == n)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";

    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[0])
        {
            second = i;
            break;
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[0])
        {
            cout << 1 << " " << i + 1 << "\n";
        }
        else
        {
            cout << second + 1 << " " << i + 1 << "\n";
        }
    }
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