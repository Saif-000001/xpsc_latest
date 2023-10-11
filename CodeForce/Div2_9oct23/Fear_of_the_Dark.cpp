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
double Distance(double x1, double x2, double y1, double y2)
{
    double D = sqrt(((x1 - y1) * (x1 - y1)) + ((x2 - y2) * (x2 - y2)));
    return D;
}

void TEST_CASES()
{
    double p1, p2, a1, a2, b1, b2;
    cin >> p1 >> p2 >> a1 >> a2 >> b1 >> b2;
    double d1 = Distance(p1, p2, a1, a2);
    double d2 = Distance(p1, p2, b1, b2);
    double d3 = Distance(0, 0, a1, a2);
    double d4 = Distance(0, 0, b1, b2);
    double d5 = Distance(a1, a2, b1, b2);

    double x = min(d1, d2), y = min(d3, d4);
    double ans = max(x, y);
    if ((x == d1 && y == d3) || (x == d2) && y == d4)
    {
    }
    else
    {
        if (2 * ans < d5)
            ans = d5 / 2;
    }
    cout << setprecision(11) << ans << "\n";
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