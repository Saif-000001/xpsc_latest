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

    if (n & 1)
    {
        cout << -1 << "\n";
        return;
    }

    vector<int> e, o;
    for (int i = 2; i <= n; i += 2)
        e.push_back(i);
    for (int i = 1; i <= n; i += 2)
        o.push_back(i);
    vector<int> ans;
    int l = 0, r = 0;
    for (int i = 1; i <= (e.size() + o.size()); i++)
    {
        if ((i & 1))
        {
            cout << e[l] << " ";
            l++;
        }
        else
        {
            cout << o[r] << " ";
            r++;
        }
    }
    cout << "\n";
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