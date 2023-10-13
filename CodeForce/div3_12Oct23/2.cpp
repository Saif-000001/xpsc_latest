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
    ll a, b, c;
    cin >> a >> b >> c;
    ll m = min({a, b, c});
    bool f = true;
    if ((a % m != 0) || (b % m != 0) || (c % m != 0))
        f = false;
    ll cnt = 0;
    while (a != m)
    {
        if (a % m != 0 || cnt > 3)
        {
            f = false;
            break;
        }
        a -= m;
        cnt++;
    }

    while (b != m)
    {
        if (b % m != 0 || cnt > 3)
        {
            f = false;
            break;
        }
        b -= m;
        cnt++;
    }

    while (c != m)
    {
        if (c % m != 0 || cnt > 3)
        {
            f = false;
            break;
        }
        c -= m;
        cnt++;
    }

    if (cnt > 3)
        f = false;
    if (f)
        cout << "YES\n";
    else
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