// Problem Link-https://codeforces.com/contest/1149/problem/A
#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if (count2 > 0)
    {
        cout << 2 << " ";
    }
    if (count1 > 0)
    {
        cout << 1 << " ";
    }

    count2--;
    count1--;
    while (count2 > 0)
    {
        cout << 2 << " ";
        count2--;
    }
    while (count1 > 0)
    {
        cout << 1 << " ";
        count1--;
    }
    cout << endl;

    return 0;
}