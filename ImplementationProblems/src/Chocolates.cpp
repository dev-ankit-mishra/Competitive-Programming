// Problem Link-https://codeforces.com/problemset/problem/1139/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long>

int main()
{

    int n;
    cin >> n;

    vll v;

    for (int i = 0; i < n; i++)
    {
        long x;
        cin >> x;
        v.push_back(x);
    }
    long long sum = 0;
    long maxVal = v[v.size() - 1];
    long val = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (i == v.size() - 1)
        {
            val = v[i];
            sum += val;
            continue;
        }
        maxVal = val - 1;
        val = min(maxVal, v[i]);
        if (val == 0)
        {
            break;
        }
        sum += val;
    }
    cout << sum << endl;

    return 0;
}