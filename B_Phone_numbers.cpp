#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << s[i];
            if (i % 2 != 0 && i != 0 && i != n - 1)
                cout << "-";
        }
    }
    else
    {
        cout << s[0] << s[1] << s[2];
        if (n != 3)
            cout << "-";

        for (int i = 3; i < n; i++)
        {
            cout << s[i];
             if (i % 2==0 && i != 0 && i != n - 1)
                    cout << "-";
        }
    }

    return 0;
}
