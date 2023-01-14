/*+-------------------------------------+
  |-----finding dublicate items in a----|
  |------array using vector and map-----|
  +-------------------------------------+*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> m;
    vector<int> v(1e5, 0); // intialiting the array with all zeros.
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++; /* key of the map stores the array element and the value keeps on incremanting */
        v[a[i]]++; /* increment the value at index of the array's value */
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        /*---------itarating over a map--------*/
        cout << it->first << " " << it->second << "\n";

        /*------itarating over a vector--------*/
        cout << "vector-" << v[it->first] << "\n";
    }
    cout << "\n";

    return 0;
}
