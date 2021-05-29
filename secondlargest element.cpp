#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

void solve()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    cout << "\nEnter the array elements";
    vector<int> l(n);
    int i = 0, largest = -INF, secondlargest = -INF, x;
    while (i < n)
    {
        cin >> l[i];
        x = l[i];
        if (x > secondlargest && x > largest)
        {
            secondlargest = largest;
            largest = x;
        }
        else if (x > secondlargest)
        {
            secondlargest = x;
        }
        ++i;
    }
    if (secondlargest > (-INF))
        cout << "\nSecond largest element in the array is " << secondlargest;
    else
        cout << "\nSecond largest element in the array is " << largest;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
}