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

    vector<int> visited(n + 1);
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        int now = i;
        while (now <= n)
        {
            if (visited[now])
                break;
            visited[now] = 1;
            ans.push_back(now);
            now *= 2;
        }
    }
    for (auto i : ans)
        cout << i << " ";
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