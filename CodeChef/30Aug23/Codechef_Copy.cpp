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
    string s;
    cin >> s;
    string st = "codechef";
    
    queue<char> qs;
    // for (int i = 0; i < s.size(); i++)
    //     qs.push(s[i]);

    int t = 8;
    queue<char> q;
    for (int i = 0; i < t; i++)
        q.push(st[i]);

    bool f = false;
    for (int i = 0; i < t - 1; i++)
    {
        if (s[i] == s[i + 1])
            f = true;
        else
        {
            f = false;
            break;
        }
    }

    if (s.size() < 8 || f == true)
    {
        cout << -1 << "\n";
        return;
    }

    string ans = "";
    int i = 0;
    while (i < s.size())
    {
        if (q.front() != s[i] && s[i] != '0')
        {
            ans += s[i];
            s[i] = '0';
            q.pop();
            i = 0;
        }
        else
            i++;
    }
    cout << ans << "\n";
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