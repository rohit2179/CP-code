#include <bits/stdc++.h>
using namespace std;

/*-----------code started---------*/

vector<int> parseInts(string str)
{
    stringstream ss(str);
    int a;
    char b;
    vector<int> result;
    while (ss >> a)
    {
        result.push_back(a);
        ss >> b;
    }
    return result;
}

/*----------code ended---------------*/

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
