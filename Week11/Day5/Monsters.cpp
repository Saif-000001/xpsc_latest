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
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> ans;
    vector<pair<int, int>> index;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % k == 0)
            ans.push_back(a[i]);
        else
            index.push_back({a[i] % k, i});
    }

    sort(index.begin(), index.end(), [&](pair<int, int> x, pair<int, int> y)
         {
        if(x.first==y.first) return y.second>x.second;
        else return x.first>y.first; });

    for (auto x : index)
        ans.push_back(x.second);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << "\n";
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