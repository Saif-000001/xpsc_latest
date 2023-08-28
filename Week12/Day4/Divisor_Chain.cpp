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

int bit(int mask, int pos)
{
    return (mask >> pos) & 1;
}

void TEST_CASES()
{
    int x;
    cin >> x;
    vector<int> ans;
    ans.push_back(x);
    int p, i = 0;
    while (1)
    {
        if (bit(x, i))
        {
            if (x == (1 << i))
            {
                p = i;
                break;
            }
            x -= (1 << i);
            ans.push_back(x);
        }

        i++;
    }

    while (p > 0)
    {
        x -= (1 << (p - 1));
        ans.push_back(x);
        p--;
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
    cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}