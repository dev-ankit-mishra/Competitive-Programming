// Problem Link-https://codeforces.com/problemset/problem/263/A

#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int n;
            cin >> n;
            if (n == 1)
            {
                int li = abs(i - 3);
                int lj = abs(j - 3);
                cout << li + lj << endl;
                break;
            }
        }
    }

    return 0;
}