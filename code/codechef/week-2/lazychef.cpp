#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int x, m, d;
        cin >> x >> m >> d;
        cout << min((x * m), (x + d)) << endl;
    }
    return 0;
}