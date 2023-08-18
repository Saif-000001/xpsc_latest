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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<pair<int, int>> v;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
        v.push_back({a[i], i + 1});
    }
    // cout<<mn<<"\n";
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn)
        {
            idx = i;
        }
    }
    // cout<<idx<<"\n";
    idx = idx + 1;
    int ans = 0;
    for (int i = idx; i < n; i++)
    {
        if (v[i].first == v[i].second)
        {
            ans++;
            break;
        }
        else
            ans++;
    }

    cout << ans << "\n";
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