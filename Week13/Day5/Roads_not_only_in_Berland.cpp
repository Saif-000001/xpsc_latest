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

int par[1005];

int dsu_find(int n)
{
    if (par[n] == n)
        return n;
    int leader = dsu_find(par[n]);
    par[n] = leader;
    return leader;
}

void dsu_union_by_rank(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if (leaderA != leaderB)
        par[leaderA] = leaderB;
}

int u[1005];
int v[1005];
int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; i++)
        par[i] = i;

    int n = t;
    t -= 1;
    int a, b, ans = 0;
    while (t--)
    {
        cin >> a >> b;
        a--, b--;
        if (dsu_find(a) == dsu_find(b))
        {
            u[ans] = a;
            v[ans] = b;
            ans++;
        }
        dsu_union_by_rank(a, b);
    }

    cout << ans << "\n";
    for (int i = 1; i < n; ++i)
    {
        if (dsu_find(i) != dsu_find(i - 1))
        {
            dsu_union_by_rank(i, i - 1);
            --ans;
            cout << u[ans] + 1 << " " << v[ans] + 1 << " " << i + 1 << " " << i << "\n";
        }
    }
    return 0;
}