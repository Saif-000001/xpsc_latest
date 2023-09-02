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
    vector<int> ans;
    int x = 1;
    while (x <= n)
    {
        ans.push_back(x);
        x *= 2;
    }

    if (ans.back() != n)
    {
        int div = n - ans.back();
        for (int i = 31; i >= 0; i--)
        {
            if (div & (1 << i))
                ans.push_back(ans.back() + (1 << i));
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans.size()<<"\n";
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