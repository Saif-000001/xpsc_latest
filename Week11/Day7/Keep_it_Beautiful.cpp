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
    vector<int> a(n), take;
    string ans = "";
    bool f = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (take.empty())
        {
            ans.push_back('1');
            take.push_back(a[i]);
        }
        else
        {
            if (f)
            {
                if (a[i] < take.back())
                    ans.push_back('0');
                else
                {
                    if (a[i] > take[0])
                        ans.push_back('0');
                    else
                    {
                        ans.push_back('1');
                        take.push_back(a[i]);
                    }
                }
            }
            else
            {
                if (a[i] >= take.back())
                {
                    ans.push_back('1');
                    take.push_back(a[i]);
                }
                else
                {
                    if (a[i] > take[0])
                        ans.push_back('0');
                    else
                    {
                        f = true;
                        ans.push_back('1');
                        take.push_back(a[i]);
                    }
                }
            }
        }
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