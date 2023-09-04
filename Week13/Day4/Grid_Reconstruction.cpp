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
    int x;
    cin >> x;
    int n = 2 * x;
    vector<int> a, b;

    for (int i = 2; i <= n; i += 2)
        a.push_back(i);
    for (int i = 1; i < n - 1; i += 2)
        b.push_back(i);

    deque<int> qe(a.begin(), a.end());
    deque<int> qo(b.begin(), b.end());

    vector<int> ansE, ansO;
    for (int i = 1; i <= x; i++)
    {
        if (i & 1)
        {
            ansE.push_back(qe.back());
            qe.pop_back();
        }
        else
        {
            ansE.push_back(qe.front());
            qe.pop_front();
        }
    }

    for (int i = 1; i < x; i++)
    {
        if (i & 1)
        {
            ansO.push_back(qo.front());
            qo.pop_front();
        }
        else
        {
            ansO.push_back(qo.back());
            qo.pop_back();
        }
    }
    ansO.push_back(n - 1);

    for (auto i : ansE)
        cout << i << " ";
    cout << "\n";
    for (auto i : ansO)
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