#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;
const int sz = 1e5;
vector<int> T{sz, 0};
int n;

int t;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> canWin(n);
    int minTillNow = INT_MAX;
    int minLos = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (minTillNow > a[i])
        {
            minTillNow = a[i];
            canWin[i] = 1;
            continue;
        }

        if (minLos < a[i])
            canWin[i] = 1;
        else
        {
            canWin[i] = 0;
            minLos = min(minLos, a[i]);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (canWin[i] == 0)
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