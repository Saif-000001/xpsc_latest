#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

int t;
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    map<int, vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v[a[i]].push_back(i);
    }

    while (q--)
    {
        ll l = 0, r = 0;
        ll x, y;
        cin >> x >> y;

        if (v[x].empty() || v[y].empty())
        {
            cout << "NO\n";
            continue;
        }
        if (v[x].front() <= v[y].back())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    Faster;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}