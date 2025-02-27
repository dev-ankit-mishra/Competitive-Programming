// Problem Link-https://codeforces.com/contest/1740/problem/A
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()

{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (!isPrime(n + 2))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }

    return 0;
}