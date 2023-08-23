#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;
#define sz 500005
vector<int> T(sz, 0);
int t, n;

void update(int i, int x)
{
    while (i <= n)
    {
        T[i] += x;
        i += (i & (-i));
    }
}

int tree(int i)
{
    ll ans = 0;
    while (i > 0)
    {
        ans += T[i];
        i -= (i & (-i));
    }
    return ans;
}
void solve()
{
    int q, x, y, w, ch;
    ll ans;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        update(i, x);
    }

    while (q--)
    {
        cin >> ch;
        switch (ch)
        {
        case 1:
            cin >> x;
            x++;
            ans = tree(x) - tree(x - 1);
            update(x, -ans);
            cout << ans << "\n";
            break;
        case 2:
            cin >> x;
            x++;
            cin >> w;
            update(x, w);
            break;
        case 3:
            cin >> x >> y;
            x++;
            y++;
            ans = tree(y) - tree(x - 1);
            cout << ans << "\n";
            break;
        }
    }
}

int main()
{
    Faster;
    cin >> t;
    int cs = 1;
    while (t--)
    {
        cout << "Case " << cs << ":\n";
        solve();
    }
    return 0;
}