#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define Bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);    ///  Fast IO.
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a) )
#define sq(a) ((a) * (a))
#define all(v) (v).begin(),(v).end()     /// ascending
#define rall(v) (v).rbegin(),(v).rend()  /// descending

int gcd ( int a, int b ) { return __gcd ( a, b ); }
//int lcm ( int a, int b ) { return a * ( b / gcd ( a, b ) ); }

//const int MX = 123;
//int arr[MX];

int32_t main()
{
    Bismillah();

    int testcases = 1;
    cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        int n;
        cin >> n;

        vector<int> v(1000+1);
        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            v[x] = i+1;
        }

        int ans = -1;
        for (int i = 1000; i >= 1; i--)
        {
            for (int j = 1000; j >= 1; j--)
            {
                if ((gcd (i, j) == 1) && v[i] != 0 && v[j] != 0)
                {
                    ans = max (ans, (v[i] + v[j]));
                }
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}