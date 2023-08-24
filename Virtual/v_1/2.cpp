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
    set<char> st;
    int ans = 1;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
        cnt++;
        if (st.size() > 3)
        {
            st.clear();
            ans++;
            cnt = 0;
            st.insert(s[i]);
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