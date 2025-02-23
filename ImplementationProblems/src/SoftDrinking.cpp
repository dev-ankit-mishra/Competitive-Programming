// Problem Link-https://codeforces.com/problemset/problem/151/A

#include <iostream>
using namespace std;

int main()
{

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink = l * k;
    int slice = c * d;

    int ans = min(drink / (nl), min(p / (np), slice));
    cout << ans / n << endl;

    return 0;
}