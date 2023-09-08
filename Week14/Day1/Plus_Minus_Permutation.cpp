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

ll sum(ll n)
{
    return (n * (n + 1)) / 2;
}

void TEST_CASES()
{
    ll n, x, y;
    cin >> n >> x >> y;

    ll nx = n / x;
    ll ny = n / y;
    ll lcm = (x * y) / __gcd(x, y);
    ll nxy = n / lcm;

    nx -= nxy;
    ny -= nxy;
    cout << sum(n) - sum(n - nx) - sum(ny) << "\n";
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