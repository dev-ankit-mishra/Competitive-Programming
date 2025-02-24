#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve(int n)
{
    vector<bool> primes(n + 1, true);

    primes[0] = false;
    primes[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i] == true)
        {

            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }
    return primes;
}

int main()
{

    int n;
    cin >> n;

    vector<bool> primes = sieve(n);

    for (int i = 1; i < primes.size(); i++)
    {
        if (primes[i] == true)
        {
            cout << i << " is Prime" << endl;
        }
        else
        {
            cout << i << " not prime" << endl;
        }
    }

    return 0;
}