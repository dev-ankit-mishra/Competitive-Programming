// Problem Link-https://codeforces.com/contest/1097/problem/A

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;
    cin >> s;
    string c = "";

    for (int i = 0; i < 5; i++)
    {
        string str;
        cin >> str;

        c += str;
    }
    bool flag = false;
    for (int i = 0; i < 2; i++)
    {
        if (c.find(s.at(i)) != string::npos)
        {
            flag = true;
        }
    }

    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}