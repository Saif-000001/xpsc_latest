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

bool isPrime(ll a)
{
    if (a < 2)
        return false;
    else if (a == 2)
        return true;
    else if (a % 2 == 0)
        return false;
    else
    {
        for (int i = 3; i * i <= a; i += 2)
        {
            if (a % i == 0)
                return false;
        }
    }
    return true;
}

void TEST_CASES()
{
    ll x, r;
    cin >> x;
    r = sqrt(x);
    if (isPrime(r) && r * r == x)
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