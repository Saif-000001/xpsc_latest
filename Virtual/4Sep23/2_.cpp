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
    int a, b, c;
    cin >> a >> b >> c;

    if ((b - a) == (c - b))
    {
        cout << "YES\n";
        return;
    }
    if ((a + c) % (2 * b) == 0)
    {
        cout << "YES\n";
        return;
    }
    if ((2 * b - a) > 0)
    {
        if ((2 * b - a) % c == 0)
        {
            cout << "YES\n";
            return;
        }
    }

    if ((2 * b - c) > 0)
    {
        if ((2 * b - c) % a == 0)
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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