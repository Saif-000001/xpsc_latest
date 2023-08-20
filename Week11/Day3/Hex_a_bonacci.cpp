#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;
ll ar[10005];
ll a, b, c, d, e, f, n;
int fn(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            ar[i] = a;
            continue;
        }
        else if (i == 1)
        {
            ar[i] = b;
            continue;
        }
        else if (i == 2)
        {
            ar[i] = c;
            continue;
        }
        else if (i == 3)
        {
            ar[i] = d;
            continue;
        }
        else if (i == 4)
        {
            ar[i] = e;
            continue;
        }
        else if (i == 5)
        {
            ar[i] = f;
            continue;
        }

        ar[i] = (ar[i - 1] + ar[i - 2] + ar[i - 3] + ar[i - 4] + ar[i - 5] + ar[i - 6]);
        ar[i] = (ar[i] % 10000007);
    }
    return ar[n];
}

int main()
{
    Faster;
    ll ans;
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cin>>a>>b>>c>>d>>e>>f>>n;
        ans = fn(n);
        ans = (ans % 10000007);
        cout << "Case " << i << ": " << ans << "\n";
    }
    return 0;
}