#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int R, O, C;
    cin >> R >> O >> C;
    (((20 - O) * 36 + C) > R) ? cout << "YES" : cout << "NO";
    return 0;
}