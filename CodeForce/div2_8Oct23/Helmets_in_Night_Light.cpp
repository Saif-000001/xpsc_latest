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

void TEST_CASES()
{
    // int n, p;
    // cin >> n >> p;
    // vector<int> a(n);
    // vector<int> b(n);
    // for (int i = 0; i < n; i++)
    //     cin >> a[i];
    // for (int i = 0; i < n; i++)
    //     cin >> b[i];

    // sort(a.begin(), a.end());
    // sort(b.begin(), b.end());
    // int sum = 0, target = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (b[i] > p || target == n - 1)
    //         break;
    //     if (a[i] < (n - target - 1))
    //     {
    //         sum += (b[i] * a[i]);
    //         target += a[i];
    //     }
    //     else
    //     {
    //         sum += (b[i] * (n - target - 1));
    //         target = n - 1;
    //         break;
    //     }
    // }
    // sum += p * (n - target);
    // cout << sum << "\n";

    int n, p;
    cin >> n >> p;
    vector<vector<int>> a(n, vector<int>(2));
    for (int i = 0; i < n; i++)
        cin >> a[i][0];
    for (int i = 0; i < n; i++)
        cin >> a[i][1];
    sort(a.begin(), a.end());

    for(auto i : a)cout<<<<" ";
    cout<<"\n";

    int sum = 0, target = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i][1] > p || target == n - 1)
            break;

        if (a[i][0] < (n - target - 1))
        {
            sum += (a[i][1] * a[i][0]);
            target += a[i][0];
        }
        else
        {
            sum += (a[i][1] * (n - target - 1));
            target = n - 1;
            break;
        }
    }
    sum += p * (n - target);
    // cout << sum << "\n";
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