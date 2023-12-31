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
    int n, a, q;
    cin >> n >> a >> q;

    string s;
    cin >> s;
    int c = a, t = a, mx = a;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            c++;
            t++;
        }
        else
            c--;
        mx = max(mx, c);
    }

    if (mx >= n)
        cout << "YES\n";
    else if (t >= n)
        cout << "MAYBE\n";
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