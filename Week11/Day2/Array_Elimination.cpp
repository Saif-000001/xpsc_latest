#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

string decimalToBinary(int n)
{
    string ans;
    for (int i = 64; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            ans += '1';
        else
            ans += '0';
    }
    return ans;
}

int t;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> cnt(64);
    int g = 0;
    for (int i = 0; i < n; i++)
    {
        string s = decimalToBinary(a[i]);
        // cout<<s<<"\n";
        for (int j = 0; j < 64; j++)
        {
            if (s[j] != '0')
                cnt[j]++;
        }
    }

    for (int i = 0; i < 64; i++)
        g = __gcd(g, cnt[i]);
    // cout << g << "\n";

    for (int i = 1; i <= n; i++)
    {
        if (g % i == 0)
            cout << i << ' ';
    }
    cout << "\n";
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