// Problem Link-https://codeforces.com/contest/514/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int i = 0;
    while (i < str.size())
    {
        char ch = str[i];
        int t = ch - '0';
        int invert = 9 - t;
        int ans = min(t, invert);
        str[i] = ans + '0';
        i++;
    }

    if (str[0] == '0')
        str[0] = '9';
    cout << str << endl;

    return 0;
}