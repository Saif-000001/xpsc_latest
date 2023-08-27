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
    int x, y, n;
    cin >> x >> y >> n;

    if (y <= n)
    {
        cout << -1 << "\n";
        return;
    }

    vector<int> ans;
    int ex = 0;
    ans.push_back(x);
    int i = 1;
    while (n--)
    {
       
    }
    ans.push_back(y);

    sort(ans.begin(), ans.end());

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