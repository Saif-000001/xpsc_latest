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

int n;

bool chack(vector<int> a, int x)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != x)
            ans.push_back(a[i]);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] != ans[ans.size() - 1 - i])
            return false;
    }

    return true;
}

void TEST_CASES()
{
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool f = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            f = chack(a, a[i]) || chack(a, a[n - 1 - i]);
            break;
        }
    }

    if (f == true)
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