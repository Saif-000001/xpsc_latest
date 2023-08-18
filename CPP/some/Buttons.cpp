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
    int a, b, c;
    cin >> a >> b >> c;

    if (c & 1)
    {
        if (b > a)
            cout << "Second\n";
        else
            cout << "First\n";
    }
    else
    {
        if (a > b)
            cout << "First\n";
        else
            cout << "Second\n";
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