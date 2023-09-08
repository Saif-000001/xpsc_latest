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
bool getPrime(int n)
{
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void TEST_CASES()
{
    int n, m;
    cin >> n >> m;
    int f = true;
    for (int i = n + 1; i < m; i++)
    {
        if (getPrime(i) == true)
        {
            f = false;
            break;
        }
    }

    if ((getPrime(n)) && (getPrime(m)) && f == true)
    {
        cout << "YES\n";
    }
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
    // cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}