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
    int n, k;
    cin >> n >> k;
    k %= (n + 1);
    vector<int> a(n);
    vector<bool> vist(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        vist[a[i]] = 1;
    }
    int nai = -1;
    for (int i = 0; i <= n; i++)
    {
        if (vist[i] == 0)
            nai = i;
    }

    deque<int> dq(a.begin(), a.end());
    for (int i = 0; i < k; i++)
    {
        int val = nai;
        dq.push_front(val);
        nai = dq.back();
        dq.pop_back();
    }

    for (auto i : dq)
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