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
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        x ^= a[i];
    }

    if (x == 0)
        cout << "YES\n";
    else
    {
        int cnt = 0;
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            k ^= a[i];
            if (k == x)
            {
                k = 0;
                cnt++;
            }
        }

        if (cnt > 1)
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