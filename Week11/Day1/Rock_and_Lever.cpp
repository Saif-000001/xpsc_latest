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
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0;
    for (int x = 0; x < 32; x++)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= (1 << x) && a[i] < (1 << x + 1))
                cnt++;
        }

        ans += (cnt * (cnt - 1)) / 2;
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