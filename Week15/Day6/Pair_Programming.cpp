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
    int k, n, m;
   cin >> k >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
       cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int pos1 = 0, pos2 = 0;
    vector<int> res;
    bool ok = true;
    while (pos1 != n || pos2 != m)
    {
        if (pos1 != n && a[pos1] == 0)
        {
            res.push_back(0);
            k++;
            pos1++;
        }
        else if (pos2 != m && b[pos2] == 0)
        {
            res.push_back(0);
            k++;
            pos2++;
        }
        else if (pos1 != n && a[pos1] <= k)
        {
            res.push_back(a[pos1++]);
        }
        else if (pos2 != m && b[pos2] <= k)
        {
            res.push_back(b[pos2++]);
        }
        else
        {
           cout << -1 << '\n';
            ok = false;
            break;
        }
    }

    if (ok)
    {
        for (int cur : res)
            cout << cur << ' ';
        cout << "\n";
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