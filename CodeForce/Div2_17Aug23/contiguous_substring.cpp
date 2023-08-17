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
    bool f = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '(' && s[i + 1] == ')')
            f = false;
        else
        {
            f = true;
            break;
        }
    }

    if (f == false)
    {
        cout << "NO\n";
        return;
    }
    cout<<"YES\n";
    // if (s[0] == ')')
    // {
    //     cout << '(';
    //     for (int i = 1; i < n; i++)
    //         cout << '(' << ')';
    //     cout << ')';
    //     cout << "\n";
    // }
    // else
    // {
    //     for (int i = 0; i < n; i++)
    //         cout << '(' << ')';
    //     cout << "\n";
    // }

    
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