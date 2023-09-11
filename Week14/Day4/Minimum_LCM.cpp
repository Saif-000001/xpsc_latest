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
int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

// void TEST_CASES()
// {
//     ll n;
//     cin >> n;
//     ll m = n, a, b;
//     ll ans = lcm(1, n - 1);
//     a = 1, b = n - 1;
//     for (ll i = 1; i < n; i++)
//     {
//         ll j = n-i;
//         ll l = lcm(i, n - i);
//         if ((l < ans) && (i + j == m))
//         {
//             ans = l;
//             a = i, b = j;
//         }
//     }
//     cout << a << " " << b << "\n";
// }

void TEST_CASES()
{
    ll n;
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << (n / i) << " " << (n - n / i) << "\n";
            return;
        }
    }
    cout << 1 << " " << n - 1 << "\n";
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