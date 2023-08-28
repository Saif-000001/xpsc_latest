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
    int r, g, b;
    vector<int> a;
    cin >> r >> g >> b;
    a.push_back(r);
    a.push_back(g);
    a.push_back(b);

    sort(a.begin(), a.end());

    if (a[2] <= a[0] + a[1])
        cout << (r + g + b) / 2 << "\n";
    else
        cout << a[0] + a[1] << "\n";
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