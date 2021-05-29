#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    cout << "Enter the array elements";
    vector<int> l(n);
    int i = 0, oddsum = 0, evensum = 0;
    while (i < n)
    {
        cin >> l[i];
        if (i & 1)
            oddsum += l[i];
        else
            evensum += l[i];
        ++i;
    }
    cout << "\n sum of even position elements:" << evensum;
    cout << "\n sum of odd position elements:" << oddsum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
}