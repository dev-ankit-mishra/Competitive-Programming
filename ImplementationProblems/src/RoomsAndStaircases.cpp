#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        int i = 0;
        int ans = n;

        int c = 0;
        while (i < n)
        {
            c++;
            if (str.at(i) == '1')
            {
                ans = max(ans, (i + 1) * 2);
                c++;
            }
            i++;
        }
        ans = max(ans, c);

        reverse(str.begin(), str.end());

        c = 0;
        i = 0;
        while (i < n)
        {
            c++;
            if (str.at(i) == '1')
            {
                ans = max(ans, (i + 1) * 2);
                c++;
            }
            i++;
        }
        ans = max(ans, c);
        cout << ans << "\n";
    }

    return 0;
}