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
    int n, x;
    cin >> n >> x;
    vector<pii> arr;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        pair<int, int> p;
        p.first = a;
        p.second = i;
        arr.push_back(p);
    }
    sort(begin(arr), end(arr));
    for (int i = 0; i < n; i++)
    {
        int l, r;
        l = 0;
        r = n - 1;
        while (l != r)
        {
            int target;
            target = x - arr[i].first;
            if (l != i && r != i &&
                arr[l].first + arr[r].first == target)
            {
                cout << arr[i].second << " " << arr[l].second << " "
                     << arr[r].second << "\n";
                return;
            }
            if (arr[l].first + arr[r].first < target)
                l++;
            else
                r--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}