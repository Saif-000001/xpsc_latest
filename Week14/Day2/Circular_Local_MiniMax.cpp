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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    bool f = true;

    int m;
    if (n & 1)
    {
        f = false;
        m = n / 2 + 1;
    }
    else
        m = n / 2;

    vector<int> ans;
    int l = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            ans.push_back(a[l]);
            l++;
        }
        else
        {
            ans.push_back(a[m]);
            m++;
        }
    }

    for (int i = 1; i < ans.size() - 1; i++)
    {
        if ((ans[i] > ans[i - 1]) && (ans[i] > ans[i + 1]))
            continue;
        else if ((ans[i] < ans[i - 1]) && (ans[i] < ans[i + 1]))
            continue;
        else
        {
            f = false;
            break;
        }
    }

    if (f == true)
    {
        cout << "YES\n";
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
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
    cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}