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
    int n, x;
    cin >> n >> x;
    ll s = 0;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s += x;
        a.push_back(x);
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % x == 0)
        {
            s += a[i % n];
            a.push_back(a[i] / x);
        }
        else
            break;
    }

    // for (auto i : a)
    //     cout << i << " ";
    // cout << "\n";

    cout << s << "\n";
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