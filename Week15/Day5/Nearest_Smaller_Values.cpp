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

// Naiv approch
// void TEST_CASES()
// {
//     ll n;
//     cin >> n;
//     vector<ll> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     vector<ll> ans;
//     bool f = false;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i - 1; j >= 0; j--)
//         {
//             if (a[j] < a[i])
//             {
//                 ans.push_back(j + 1);
//                 f = true;
//                 break;
//             }
//             else
//                 f = false;
//         }
//         if (f == false)
//             ans.push_back(0);
//     }

//     for (auto i : ans)
//         cout << i << " ";
//     cout << "\n";
// }

// Monotonic Stack
void TEST_CASES()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    stack<pii> st;
    vector<ll> ans;
    for (int i = 0; i < n; i++)
    {
        while (st.size() > 0 && st.top().first >= a[i])
            st.pop();

        if (st.size() > 0)
            ans.push_back(st.top().second);
        else
            ans.push_back(0);

        st.push({a[i], i + 1});
    }

    for (auto i : ans)
        cout << i << " ";
    cout << "\n";
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    // cin>>t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}