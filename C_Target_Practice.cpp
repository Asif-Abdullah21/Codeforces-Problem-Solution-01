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
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        char s[20][20];

        ll sum =0;

        
        for (int i = 1; i <=10; i++)
        {
            for (int j = 1; j <=10; j++)
            {
                cin >> s[i][j];
            }
            
        }
        
        // for (int i = 1; i <=10; i++)
        // {
        //     for (int j = 1; j <=10; j++)
        //     {
        //         cout << s[i][j] << " ";
        //     }

        //     cout << endl;
            
        // }

        for (int i = 1; i <=10; i++)
        {
            for (int j = 1; j <=10; j++)
            {
                if(s[i][j]=='X')
                {
                   // cout <<min({i,j,11-i,11-j})<< " ";
                   // cout << endl;
                    sum += min({i,j,11-i,11-j});
                }
            }
            
        }

        cout << sum << endl;
         
    }
     
    return 0;
}
