#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

void solve()
{
    int n;
    cout << "Enter the element";
    cin >> n;
    int i = 0,
        rightsum = 0, leftsum = 0;
    vector<int> l(n);
    while (i < n)
    {
        cin >> l[i];
        leftsum += l[i];
        ++i;
    }
    // i = 0;
    --i;
    int prev = 0;
    while (i >= 0)
    {
        leftsum -= l[i];
        rightsum += prev;
        if (leftsum == rightsum)
        {
            cout << "\n"
                 << leftsum << " " << rightsum << " " << l[i];
            cout << "\nthe position is " << n - i + 1;
            return;
        }
        // leftsum += prev;
        prev = l[i];
        --i;
    }
    cout << "\nNo such position exists";
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
}