#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

int main()
{
    Faster;
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int ans = sum;
    int mem[(1 << n) + 10];
    mem[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int mask = (1<<i); mask < (1 << (i + 1)); mask++)
        {
            mem[mask] = mem[mask ^ (1 << i)] + a[i];
            ans = min(ans, abs(2 * mem[mask] - sum));
        }
    }
    cout << ans << "\n";
    return 0;
}