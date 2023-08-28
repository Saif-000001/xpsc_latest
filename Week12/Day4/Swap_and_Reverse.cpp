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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if ((k & 1) == 0)
    {
        sort(s.begin(), s.end());
        cout << s << "\n";
        return;
    }

    string a = "";
    string b = "";

    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            a += s[i];
        else
            b += s[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int r = 0, l = 0;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            s[i] = a[r++];
        else
            s[i] = b[l++];
    }
    cout << s << "\n";
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