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
    while (n)
    {
        if ((n & 1) == 0)
        {
            ans.push_back(2);
            n -= 2;
        }
        else
        {
            ans.push_back(3);
            n -= 3;
        }
    }
    cout << ans.size() << "\n";
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
    // cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}