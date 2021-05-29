#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    int i = 0, k;
    for (i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    cin >> k;
    int deletecount = 0;
    while (deletecount < n - 1)
    {
        int ind = 0;
        for (int j = 0; j < n; j++)
        {
            ind++;
            ind %= (n - deletecount);
            if (!j || (j - deletecount) % k != 0)
            {
                deletecount--;
                l.push_back(l[0]);
            }
            l.erase(l.begin());
            deletecount++;
        }
    }
    for (int i = 0; i < l.size(); i++)
        cout << l[i];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
}