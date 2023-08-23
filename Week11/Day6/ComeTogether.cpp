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
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int ans = 0;

    if (x1 <= x2 && x1 <= x3)
        ans += min(x2 - x1, x3 - x1);
    if (x1 >= x2 && x1 >= x3)
        ans += min(x1 - x2, x1 - x3);
    if (y1 <= y2 && y1 <= y3)
        ans += min(y2 - y1, y3 - y1);
    if (y1 >= y2 && y1 >= y3)
        ans += min(y1 - y2, y1 - y3);

    cout << ans + 1 << "\n";
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