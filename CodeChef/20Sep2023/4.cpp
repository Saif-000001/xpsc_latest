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

bool check(vector<int> a, int x, int y)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (x >= a[i])
            continue;
        else if (y > a[i])
            y -= a[i];
        else
            return false;
    }

    return true;
}

int search(vector<int> a, int l, int h, int x)
{
    int ans = INT_MAX;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (check(a, mid, x))
        {
            ans = mid;
            h = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}

void TEST_CASES()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    if (s < m)
        cout << 0 << "\n";
    else
        cout << search(a, 0, s, m) << "\n";
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