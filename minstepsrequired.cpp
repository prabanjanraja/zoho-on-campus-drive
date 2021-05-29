/* 
Minimum steps required to make all elements of the array 
One step is considered as incrementing any element of the array with 1
*/

#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    int i = 0;
    while (i < n)
    {
        cin >> l[i];
        ++i;
    }
    bool finish = false;
    int ans = 0;
    while (!finish)
    {
        ++ans;
        int maxindex = 0;
        for (int i = 0; i < n; i++)
        {
            if (l[i] > l[maxindex])
                maxindex = i;
        }
        int min = 1e9, max = -1e9;
        for (int i = 0; i < n; i++)
        {
            if (i != maxindex)
                l[i]++;
            if (l[i] < min)
                min = l[i];
            else if (l[i] > max)
            {
                max = l[i];
            }
        }
        finish = min == max; //check if min and max of the array are the same
        for (size_t i = 0; i < n; i++)
        {
            cout << l[i] << " ";
        }
        cout << "\n continue " << finish << "\n";
    }
    cout << ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
}