#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int MOD = 1000000007;
const int N = 2e5 + 5;
typedef pair<int, int> pii;
ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}
/*
void TEST_CASES()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int s = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        s+=a[i];
    }
    int s1 = 0, s2 = 0;
    int ans = 0, m;

    for (int i = 0; i < n - 1; i++)
    {
        s1 += a[i];
        for (int j = i + 1; j < n; j++)
            s2 += a[j];
        int g = gcd(s1, s2);
        ans = max(ans, g);
        s2 = 0;
    }
    cout << ans << "\n";
}
*/

void TEST_CASES()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        a[i] += a[i - 1];
    ll ans = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        ll g = gcd(a[i], a[n] - a[i]);
        ans = max(ans, g);
    }
    cout << ans << "\n";
}
int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}