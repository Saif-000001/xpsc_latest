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
int a[N];
void TEST_CASES()
{
    string s;
    cin >> s;
    int cur = 0;
    for (auto it : s)
    {
        if (it == '+')
        {
            ++cur;
            if (cur == 1)
            {
                a[cur] = 1;
            }
            else if (a[cur - 1] != 0)
            {
                a[cur] = -1;
            }
            else
            {
                a[cur] = 0;
            }
        }
        else if (it == '-')
        {
            --cur;
            if (cur > 0 && a[cur + 1] == 1)
            {
                a[cur] = 1;
            }
        }
        else if (it == '0')
        {
            if (cur <= 1 || a[cur] == 1)
            {
                cout << "NO\n";
                return;
            }
            a[cur] = 0;
        }
        else
        {
            if (cur > 1 && a[cur] == 0)
            {
                cout << "NO\n";
                return;
            }
            if (cur != 0)
                a[cur] = 1;
        }
    }
    cout << "YES\n";
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