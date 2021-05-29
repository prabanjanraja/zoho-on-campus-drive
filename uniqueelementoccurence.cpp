#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

void solve()
{
    int n;
    cout << "Enter the element";
    cin >> n;
    int i = 0;
    vector<int> l(n);
    map<int, int> freq;
    while (i < n)
    {
        cin >> l[i];
        freq[l[i]] += 1;
        ++i;
    }
    for (auto it = freq.begin(); it != freq.end(); ++it)
    {
        cout << "\n"
             << it->first << " (" << it->second << ")";
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