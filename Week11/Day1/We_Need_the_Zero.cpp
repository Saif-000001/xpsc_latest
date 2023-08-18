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

    for (int x = 0; x < (1 << 8); x++)
    {
        vector<int> v = a;
        for (int i = 0; i < n; i++)
        {
            v[i] = v[i] ^ x;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
            ans = ans ^ v[i];

        if (ans == 0)
        {
            cout << x << "\n";
            return;
        }
    }
    cout << -1 << "\n";
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