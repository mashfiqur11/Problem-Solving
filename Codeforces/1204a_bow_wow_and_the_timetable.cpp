#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define Bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);    ///  Fast IO.
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a) )
#define sq(a) ((a) * (a))
#define all(v) (v).begin(),(v).end()     /// ascending
#define rall(v) (v).rbegin(),(v).rend()  /// descending

//ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
//ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

//const ll MX = 123;
//int arr[MX];

int main()
{
    Bismillah();

    int testcases = 1;
    //cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        string s;
        cin >> s;

        if (s.size() == 1) 
        {
            cout << 0;
            return 0;
        }

        
        ll number_of_zero = count (all (s), '0');

        if (number_of_zero == s.size() -1)
        {
            if (number_of_zero % 2 == 0)
            {
                cout << number_of_zero / 2;
            }
            else
            {
                cout << (number_of_zero / 2) + 1;
            }
        }
        else 
        {
            ll ans = ((s.size() - 1) / 2) + 1;
            cout << ans;
        }
    }
    
    return 0;
}