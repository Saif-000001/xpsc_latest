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
    string s;
    cin >> s;
    int n = s.size();

    string a, b;
    for (int i = 0; i < n; ++i)
    {
        a += "()";
        b += "(";
    }
    for (int i = 0; i < n; ++i)
        b += ")";

    if (a.find(s) == string::npos)
    {
        cout << "YES\n"
             << a << '\n';
    }
    else if (b.find(s) == string::npos)
    {
        cout << "YES\n"
             << b << '\n';
    }
    else
    {
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