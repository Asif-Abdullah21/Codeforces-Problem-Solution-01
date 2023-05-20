#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define sz(v) v.size()
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        vector<string> v;
        
        for (int i = 0; i < n-1; i++)
        {
            int f=0;
            string temp = "";
            temp += s[i]; 
            temp += s[i+1]; 
            int v_len =  sz(v);
            
            for (int j = 0; j < v_len; j++)
            {
                if(v[j]==temp)
                {
                    f=1;
                    break;
                }
            }

            if(f==0) v.push_back(temp);
        
        }
        
        cout << sz(v) << endl;
        
    }
    

    return 0;
}

/*
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define sz(v) v.size()
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        set<string> str_set;
        
        for (int i = 0; i < n-1; i++)
        {
            string temp;
            temp.push_back(s[i]); // temp += s[i]; 
            temp.push_back(s[i+1]); //   temp += s[i+1];

            str_set.insert(temp);
        
        }
        
        cout << sz(str_set) << endl;
        
    }
    

    return 0;
}

*/


/*masud_abdullah

#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
/// sort(a,a+n); array sorting[0 base index]
/// reverse(a,a+n); array reverse[0 base index]
/// sort(s.begin(),s.end()); string sorting
/// reverse(s.begin(),s.end()); string reverse
/// int max_element = *max_element(a,a+n);[0 base index]
/// int min_element = *min_element(a,a+n);[0 base index]
/// int max_indx = max_element(a,a+n)-a;[0 base index]
/// int min_indx = min_element(a,a+n)-a;[0 base index]

/// Substring_Check:
/// str1(main string)
/// str2(substring)
/// if((str1.find(str2) != string :: npos))yy;
/// else nn;

/// int a[n];
/// iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        string str;
        cin >> str;
        set<string> str_set;
        for (int i = 0; i < sz(str) - 1; i++)
        {
            string str_tm; //= ""; //ekhane space diye initialize kore na dileo hobe
            // str_tm += str[i];
            // str_tm += str[i + 1];
            
            str_tm.push_back(str[i]);
            str_tm.push_back(str[i+1]);
            str_set.insert(str_tm);
            // if((s.find(str) != string :: npos))cnt++;
        }
        cout << str_set.size() << nl;
    }
    return 0;
}

*/