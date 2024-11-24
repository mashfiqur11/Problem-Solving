///   ***   ---   |||		 In the name of ALLAH		|||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define endl '\n'
#define ll long long
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define mem(a,b) memset(a, b, sizeof(a) )
#define sq(a) ((a) * (a))

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const int MX = 2e5+123;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
//
//debug
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu(){cerr << endl;}
template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void faltu(T arg,const hello&...rest){cerr<<arg<<' ';faltu(rest...);}
//#else
//#define dbg(args...)

ll lcm ( ll a, ll b ) { return a * ( b / __gcd ( a, b ) ); }
int n;

bool isValid (int x, int y)
{
    return (x >= 0 && x <= 1 && y >= 0 && y <= n);
}

int32_t main()
{
    fastio();
    // srand(time(NULL));

    int testcases = 1;
    cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        cin >> n;
        string s[2];
        cin >> s[0] >> s[1];
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            if (s[0][i] == 'A') v.push_back ({0, i});
            if (s[1][i] == 'A') v.push_back ({1, i});
        }
        vector<vector<bool>> f(2, vector<bool> (n, false));

        sort (all (v));
        // dbg(v);
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {   
            int x = v[i].first, y = v[i].second;
            if (f[x][y]) continue;  

            if (isValid(x + 1, y) && s[x + 1][y] == 'A' && !f[x+1][y]) 
            {
                f[x][y] = true;
                f[x + 1][y] = true;
                ans++;
            }
            else if (isValid(x - 1, y) && s[x - 1][y] == 'A' && !f[x-1][y]) 
            {
                f[x][y] = true;
                f[x - 1][y] = true;
                ans++;
            }
            else if (isValid(x, y + 1) && s[x][y + 1] == 'A' && !f[x][y+1]) 
            {
                f[x][y] = true;
                f[x][y + 1] = true;
                ans++;
            }
            else if (isValid(x, y - 1) && s[x][y - 1] == 'A' && !f[x][y-1]) 
            {
                f[x][y] = true;
                f[x][y - 1] = true;
                ans++;
            }
            else if (isValid(x, y+2) && s[x][y+2] == 'A' && !f[x][y+2]) 
            {
                f[x][y] = true;
                f[x][y+2] = true;
                ans++;
            }
            // dbg (f);
        }

        cout << ans << endl;
    }

    return 0;
}