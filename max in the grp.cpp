#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

void solve()
{
    int n;
    // cout << "Enter the element";
    cin >> n;
    int i = 0;
    vector<int> l(n);
    // set<int> list;
    while (i < n)
    {
        cin >> l[i];
        ++i;
    }
    int k, x;
    cin >> k;
    int max = -1e9;
    for (i = k; i <= n; i++)
    {
        cout << "\nthe elements are ";
        for (int j = i - k; j < i; j++)
        {
            if (l[j] > max)
                max = l[j];
            cout << l[j] << " ";
        }
        cout << "\ntheir max is " << max;
    }
    /* // cout << "k is " << k;
    list.clear();
    for (i = 0; i < k; ++i)
        list.insert(l[i]);
    for (; i <= n; i++)
    {
        cout << *--list.end() << " ";
        x = l[i - k];
        auto it = list.find(x);
        list.erase(it);
        list.insert(l[i]);
    } */
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
}