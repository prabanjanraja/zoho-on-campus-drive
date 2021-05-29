#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

void solve()
{
    int n;
    cout << "Enter the size of the element";
    cin >> n;
    vector<int> l(n);
    int i = 0, x, g, G;
    cout << "\nEnter the array elements";
    while (i < n)
    {
        cin >> l[i];
        ++i;
    }
    map<int, int> sum;
    map<int, vector<int>> list;
    cout << "\nEnter the gap...";
    cin >> G;
    i = 0;
    while (i < n)
    {
        x = l[i];
        g = i % G;
        sum[g] += x;
        list[g].push_back(x);
        ++i;
    }
    cout << "\n";
    i = 0;
    while (i < G)
    {
        cout << sum[i] << " ";
        cout << "\nthe elements are ";
        int j = 0;
        while (j < list[i].size())
        {
            cout << list[i][j] << " ";
            ++j;
        }
        cout << "\n";
        ++i;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
}