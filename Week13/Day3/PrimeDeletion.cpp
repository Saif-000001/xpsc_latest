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
    for (int i = 0; i < s.size(); i++)
    {
        int a = s[i] - 48;

        for (int j = i + 1; j < s.size(); j++)
        {
            bool f = true;
            int b = s[j] - 48;
            int prime = a * 10 + b;
            for (int k = 2; k < prime; k++)
            {
                if (prime % k == 0)
                {
                    f = false;
                    break;
                }
            }
            if (f == true)
            {
                cout << prime << "\n";
                return;
            }
        }
    }
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