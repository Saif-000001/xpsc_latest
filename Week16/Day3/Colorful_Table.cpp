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
vector<int> all[N];
void TEST_CASES()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i <= k; i++)
        all[i].clear();

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        all[a[i]].push_back(i);
    }
    set<int> st;
    for (int i = 0; i < n; i++)
        st.insert(i);

    vector<int> ans;
    for (int i = 1; i <= k; i++)
    {
        if (all[i].empty())
        {
            ans.push_back(0);
            continue;
        }

        int xmin = *st.begin();
        int xmax = *st.rbegin();
        int ymin = xmin;
        int ymax = xmax;
        int rectengle = (xmax - xmin + 1) + (ymax - ymin + 1);
        ans.push_back(rectengle);
        for (auto j : all[i])
            st.erase(j);
    }
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