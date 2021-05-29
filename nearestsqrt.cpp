#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

void solve()
{
    int n;
    cout << "Enter the element";
    cin >> n;
    int i = 1;
    while (i * i <= n)
        ++i;
    cout << "\n The nearest square root is " << --i;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
}