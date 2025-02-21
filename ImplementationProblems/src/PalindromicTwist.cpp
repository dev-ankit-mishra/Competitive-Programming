#include <iostream>
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
        int j = n - 1;
        bool flag = true;
        while (i < j)
        {
            int ci = str.at(i) - '0';
            int cj = str.at(j) - '0';
            if (abs(ci - cj) > 2 || abs(ci - cj) == 1)
            {
                flag = false;
                break;
            }
            i++;
            j--;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}