// Problem Link-https://codeforces.com/problemset/problem/723/A

#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    int mn = min(a, min(b, c));
    int mx = max(a, max(b, c));
    int res = (mn + mx) / 2;

    int l = abs(mn - res);
    int r = abs(mx - res);

    cout << l + r << endl;

    return 0;
}