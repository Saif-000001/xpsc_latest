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
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    bool f = false;
    for (int i = 0; i <=6; i++)
    {
        if (x.find(s) != -1)
        {
            f = true;
            cout << i << "\n";
            break;
        }
        x += x;
    }
    if (f == false)
        cout << -1 << "\n";
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