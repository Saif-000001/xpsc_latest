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

    int ans;
    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i] - 48;
        for (int j = i + 1; j < s.size(); j++)
        {
            int y = s[j] - 48;
            int d = x * 10 + y;
            // cout<<d<<"\n";
            bool flag = true;
            for (int k = 2; k < d; k++)
            {
                if (d % k == 0)
                {
                    flag = false;
                    break;
                }
            }

            if (flag == true)
            {
                ans = d;
                break;
            }
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
    cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}