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
typedef pair<char, int> pii;

void TEST_CASES()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = s1.size(), n2 = s2.size();

    vector<pii> s, t;
    int cnt = 1;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s1[i + 1])
            cnt++;
        else
        {
            s.push_back({s1[i], cnt});
            cnt = 1;
        }
    }

    cnt = 1;
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == s2[i + 1])
            cnt++;
        else
        {
            t.push_back({s2[i], cnt});
            cnt = 1;
        }
    }

    if (s.size() != t.size())
    {
        cout << "NO\n";
        return;
    }

    bool ok = true;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i].first == t[i].first) && (s[i].second <= t[i].second))
            continue;
        else
        {
            ok = false;
            break;
        }
    }

    if (ok == true)
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