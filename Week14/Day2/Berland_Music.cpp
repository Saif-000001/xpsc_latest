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
    vector<int> a(n), ans(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans[i] = a[i];
        mp[a[i]] = i;
    }

    string s;
    cin >> s;
    vector<int> z, o;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            o.push_back(a[i]);
        else
            z.push_back(a[i]);
    }

    sort(o.begin(), o.end(), greater<>());
    sort(z.begin(), z.end(), greater<>());
    sort(a.begin(), a.end(), greater<>());

    int i;
    for (i = 0; i < o.size(); i++)
        ans[mp[o[i]]] = a[i];
    for (int j = 0; j < z.size(); j++)
        ans[mp[z[j]]] = a[i++];

    for (auto i : ans)
        cout << i << " ";
    cout << "\n";
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