//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define mem(a,b) memset(a, b, sizeof(a) )
#define sq(a) ((a) * (a))
#define all(v) (v).begin(),(v).end()     /// ascending
#define rall(v) (v).rbegin(),(v).rend()  /// descending


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// ll lcm ( ll a, ll b ) { return a * ( b / __gcd ( a, b ) ); }

const int MX = 1e5+123;

int32_t main() {
//#ifndef ONLINE_JUDGE
    //freopen("Error.txt", "w", stderr);
//#endif

    fastio();

    int testcases = 1;
    cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<int> c = a;
        vector<int> d = b;

        sort (all (c));
        sort (all (d));
        vector<pair<int, int>> ans;

        bool isPossible = 1;

        for (int i = 0; i < n; i++)
        {
            int sorted_a = c[i], sorted_b = d[i];
            bool f = 0;
            for (int j = i; j < n; j++)
            {
                if (a[j] == sorted_a && b[j] == sorted_b)
                {
                    a[j] = a[i];
                    a[i] = sorted_a;
                    b[j] = b[i];
                    b[i] = sorted_b;
                    if (i != j)ans.push_back ({j+1, i+1});
                    // debug (a);
                    // debug (b);
                    f = 1;
                    break;
                }
            }
            if (!f)
            {
                isPossible = 0;
                break;
            }
        }

        if (!isPossible) cout << -1 << endl;
        else
        {
            cout << ans.size() << endl;
            for (auto val : ans)
            {
                cout << val.first << ' ' << val.second << endl;
            }
        }
    }
    
    return 0;
}
