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
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x;

    if (n & 1)
    {
        cout << 4 << "\n";
        cout << 1 << " " << n << "\n";
        cout << 2 << " " << n << "\n";
        cout << 1 << " " << 2 << "\n";
        cout << 1 << " " << 2 << '\n';
    }
    else
    {
        cout << 2 << "\n";
        cout << 1 << " " << n << "\n";
        cout << 1 << " " << n << "\n";
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