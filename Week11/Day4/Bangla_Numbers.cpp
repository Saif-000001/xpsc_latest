#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void Bangla(ll n)
{
    if (n >= 10000000)
    {
        Bangla(n / 10000000);
        cout << " kuti";
        n %= 10000000;
    }

    if (n >= 100000)
    {
        Bangla(n / 100000);
        cout << " lakh";
        n %= 100000;
    }

    if (n >= 1000)
    {
        Bangla(n / 1000);
        cout << " hajar";
        n %= 1000;
    }

    if (n >= 100)
    {
        Bangla(n / 100);
        cout << " shata";
        n %= 100;
    }

    if (n)
        cout << " " << n;
}

int main()
{
    ll n;
    int i = 1;
    while ((cin >> n))
    {
        cout << setw(4) << i++ << ".";
        if (n)
            Bangla(n);
        else
            cout << " 0";
        cout << "\n";
    }
    return 0;
}