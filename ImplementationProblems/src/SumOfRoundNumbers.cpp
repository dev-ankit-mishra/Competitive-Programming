// Problem Link-https://codeforces.com/problemset/problem/1352/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

int main()
{

  int t;
  cin >> t;

  while ((t--) > 0)
  {
    int n;
    cin >> n;

    vi v;
    int prod = 1;
    while (n > 0)
    {
      int rem = n % 10;
      if (rem != 0)
      {
        v.push_back(rem * prod);
      }
      prod *= 10;
      n = n / 10;
    }
    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
      cout << v[i] << " ";
    }
    cout << endl;
  }

  return 0;
}