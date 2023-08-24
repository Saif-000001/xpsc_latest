#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD=1e9+7;

int t;
void solve()
{
    int n, k;
    cin>>n>>k;
    if(k>n || (n%k)){
        cout<<1<<"\n";
        cout<<n<<"\n";
        return;
    }

    cout<<2<<"\n";
    cout<<1<<" "<<n-1<<"\n";
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