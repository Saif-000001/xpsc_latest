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
    vector<set<int>> a;
    set<int> st;
    int n;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            a[i].insert(x);
            st.insert(x);
        }
    }

    int ans = 0;
    for (int i = 1; i <= 50; i++)
    {
        set<int> res;
        for (int j = 0; j < n; j++)
        {
            bool f = true;
            for (auto x : a[j])
            {
                if (x == i)
                {
                    f = false;
                    break;
                }
            }

            if (f)
            {
                for (auto x : a[j])
                    res.insert(x);
            }
        }

        if (st.size() != res.size())
            ans = max(ans, (int)res.size());
    }

    cout << ans << "\n";
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