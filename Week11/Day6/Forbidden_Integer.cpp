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
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "YES\n";
        cout << n << "\n";
        for (int i = 1; i <= n; i++)
            cout << 1 << " ";
        cout << "\n";
    }
    else if (k == 1 || k == 2 && (n & 1))
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        cout << n / 2 << "\n";
        for (int i = 1; i < n / 2; i++)
            cout << 2 << " ";
        cout << (n % 2 + 2) << "\n";
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