#include <bits/stdc++.h>
using namespace std;

int main()
{
    string cha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string rvs = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    map<char, char> M;
    for (int i = 0; i < cha.size(); i++)
        M[cha[i]] = rvs[i];

    int n;
    char s[21];
    bool isPalindrom, isMirrored;
    while (cin >> s)
    {
        isPalindrom = isMirrored = 1;
        n = strlen(s);
        for (int i = 0; i <= n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
                isPalindrom = 0;
            if (s[n - 1 - i] != M[s[i]])
                isMirrored = 0;
        }

        if (isPalindrom && isMirrored)
            cout << s << " -- is a mirrored palindrome.\n\n";
        else if (isPalindrom && !isMirrored)
            cout << s << " -- is a regular palindrome.\n\n";
        else if (!isPalindrom && isMirrored)
            cout << s << " -- is a mirrored string.\n\n";
        else
            cout << s << " -- is not a palindrome.\n\n";
    }

    return 0;
}