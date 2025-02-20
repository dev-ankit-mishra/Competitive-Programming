// Problem Link-https://codeforces.com/problemset/problem/507/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

int main()
{

    int n;
    cin >> n;

    vector<pair<int, int>> v;

    int k;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back({val, i + 1});
    }

    sort(v.begin(), v.end());

    int i = 0;
    while (i < v.size() && k >= v[i].first)
    {
        k -= v[i].first;
        i++;
    }
    cout << i << endl;
    for (int j = 0; j < i; j++)
    {
        cout << v[j].second << " ";
    }
    cout << endl;

    return 0;
}