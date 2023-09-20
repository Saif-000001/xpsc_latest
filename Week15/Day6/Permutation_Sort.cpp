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
    vector<int> a(n + 1);
    bool f = true;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] != i)
            f = false;
    }

    if (f == true)
    {
        cout << 0 << "\n";
        return;
    }

    if (a[1] == 1 || a[n] == n)
        cout << 1 << "\n";
    else if (a[1] == n && a[n] == 1)
        cout << 3 << "\n";
    else
        cout << 2 << "\n";
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