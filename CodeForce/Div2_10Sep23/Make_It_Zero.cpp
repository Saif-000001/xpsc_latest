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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int x = 0;
    for (int i = 0; i < n; i++)
        x ^= a[i];

    if (x == 0)
    {
        cout << 1 << "\n";
        cout << 1 << " " << n << "\n";
    }
    else if ((x & 1) == 0)
    {
        cout << 2 << "\n";
        cout << 1 << " " << n << "\n";
        cout << 1 << " " << n << "\n";
    }
    else
    {
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            int x = a[i], y = i + 1;
            while (y < n)
            {
                x ^= a[y];
                if (x == 0 && ((y - i) & 1) == 0)
                {
                    f = true;
                    break;
                }
                y++;
            }

            if (f == true)
            {
                if (i == 0)
                {
                    cout << 3 << "\n";
                    cout << 1 << " " << y + 1 << "\n";
                    cout << y + 2 << " " << n << "\n";
                    cout << y + 2 << " " << n << "\n";
                }
                else
                {
                    cout << 5 << "\n";
                    cout << 1 << " " << i << "\n";
                    cout << 1 << " " << i << "\n";
                    cout << i + 1 << " " << y + 1 << "\n";
                    cout << y + 2 << " " << n << "\n";
                    cout << y + 2 << " " << n << "\n";
                }
                break;
            }
        }
    }
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