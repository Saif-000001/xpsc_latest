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
    string s;
    cin >> s;
    int f = s.find('1');
    if (f > n - 3)
    {
        cout << s << "\n";
        return;
    }
    else
    {
        int z = '0' * (n - f - 1);
        cout << s[f+ 1] + z << "\n";
        return;
    }

    //   n = int(input())
    // s = input()
    // f = s.find('1')
    
    // if f > n - 3:
    //     return s
    // z = '0' * (n - f - 1)
    // return s[:f + 1] + z


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