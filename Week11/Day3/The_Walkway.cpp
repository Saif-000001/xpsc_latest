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
    ll n, m, d;
    cin >> n >> m >> d;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];

    ll sum = m;
    for (int i = 0; i < m - 1; i++)
    {
        ll cur = a[i];
        ll next = a[i + 1];
        sum += (next - cur - 1) / d;
    }

    if (a[0] != 1)
    {
        sum += (a[0] - 2) / d;
        sum += 1;
    }
    sum += (n - a[m - 1]) / d;

    vector<int> con(m);
    ll ans = 1e18;

    for (int i = 1; i < m - 1; i++)
    {
        ll prv = a[i - 1];
        ll nxt = a[i + 1];
        ll now = a[i];
        ll tmp = sum;

        tmp -= (now - prv - 1) / d;
        tmp -= (nxt - now - 1) / d;
        tmp--;

        tmp += (nxt - prv - 1) / d;
        con[i] = tmp;
        ans = min(ans, tmp);
    }

    {
        ll tmp = sum;
        if (a[0] != 1)
        {
            tmp -= (a[0] - 2) / d;
            tmp -= 1;
        }
        tmp--;
        tmp -= (a[1] - a[0] - 1) / d;
        tmp += (a[1] - 2) / d;
        tmp++;
        ans = min(ans, tmp);
        con[0] = tmp;
    }

    {
        ll tmp = sum;
        tmp -= (n - a[m - 1]) / d;
        tmp--;
        tmp -= (a[m - 1] - a[m - 2] - 1) / d;
        tmp += (n - a[m - 2]) / d;
        ans = min(ans, tmp);
        con[m - 1] = tmp;
    }

    cout << ans << " ";
    ll cnt = 0;
    for (int i = 0; i < m; i++)
    {
        cnt += (con[i] == ans);
    }
    cout << cnt << "\n";
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