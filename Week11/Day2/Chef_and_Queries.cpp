#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;
bitset<4294967299> bs;

int t;
void solve()
{
    unsigned int q, s, a, b;
    cin >> q >> s >> a >> b;
    ll sum = s / 2;
    bs[s / 2] = 1;
    for (unsigned int i = 2; i <= q; i++)
    {
        s = a * s + b;
        if (s % 2 == 0 && bs[s / 2] == 1)
        {
            sum -= (s / 2);
            bs[s / 2] = 0;
        }
        else if (s % 2 == 1 && bs[s / 2] == 0)
        {
            sum += (s / 2);
            bs[s / 2] = 1;
        }
    }

    cout << sum << "\n";
}

int main()
{
    Faster;
    solve();
    return 0;
}