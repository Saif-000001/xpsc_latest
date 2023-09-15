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
    int freq[26] = {0};
    for (char c : s)
        freq[c - 'A']++;

    // for (int i = 0; i < 26; i++)
    //     cout << freq[i] << " ";

    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        cnt += (freq[i] % 2);
    }
    // cout << cnt << "\n";
    if (cnt > 1)
    {
        cout << "NO SOLUTION\n";
        return;
    }

    string ans;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 == 0)
        {
            for (int j = 0; j < freq[i] / 2; j++)
                ans.push_back(i + 'A');
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2)
        {
            for (int j = 0; j < freq[i]; j++)
                ans.push_back(i + 'A');
        }
    }

    for (int i = 25; i >= 0; i--)
    {
        if (freq[i] % 2 == 0)
        {
            for (int j = 0; j < freq[i] / 2; j++)
                ans.push_back(i + 'A');
        }
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
    // cin>>t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}