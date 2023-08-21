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
    string ch = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        s.push_back(ch[i]);
    int x = 0;
    do
    {
        cout << s << "\n";
        x++;

    } while (next_permutation(s.begin(), s.end()) && k > x);
}

int main()
{
    Faster;
    cin >> t;
    int i = 1;
    while (t--)
    {
        cout << "Case " << i++ << ": \n";
        solve();
    }
    return 0;
}