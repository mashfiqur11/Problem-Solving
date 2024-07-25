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

int32_t main() {
//#ifndef ONLINE_JUDGE
    //freopen("Error.txt", "w", stderr);
//#endif

    int testcases = 1;
    cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        cout << "Case " << tt << ":" << endl;
        stack<string> frwrd, backwrd;
        frwrd.push ("http://www.lightoj.com/");
        string s;
        while (cin >> s)
        {
            if (s == "QUIT") break;
            if (s == "VISIT") continue;
            else if (s == "BACK")
            {
                if (frwrd.size() > 1)
                {
                    string dlt = frwrd.top();
                    frwrd.pop();
                    backwrd.push(dlt);
                    cout << frwrd.top() << endl;
                }
                else
                    cout << "Ignored" << endl;
            }
            else if (s == "FORWARD")
            {
                if (backwrd.size())
                {
                    string now = backwrd.top();
                    backwrd.pop();
                    frwrd.push(now);
                    cout << now << endl;
                }
                else
                    cout << "Ignored" << endl;
            }
            else
            {
                while (!backwrd.empty()) backwrd.pop();
                frwrd.push(s);
                cout << s << endl;
            }
        }
    }

    return 0;
}
