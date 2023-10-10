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
    ll n;
    cin >> n;
    if (n <= 6 || n == 9)
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        ll a = 1;
        ll b = 2;
        ll c = n - 3;
        if (c % 3 == 0)
        {
            b += 2;
            c -= 2;
        }

        cout << a << " " << b << " " << c << "\n";
    }
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