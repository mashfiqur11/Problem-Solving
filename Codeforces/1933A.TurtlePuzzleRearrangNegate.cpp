#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define Bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);    ///  Fast IO.
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define pb push_back
#define mem(a,b) memset(a, b, sizeof(a) )
#define sq(a) ((a) * (a))
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()

const int mx = 123;
int arr[mx];

int main()
{
    Bismillah();

    int testcases = 1;
    cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) cin >> arr[i];

        ll total = 0;

        for (int i = 1; i <= n; i++)
        {
            if (arr[i] < 0) total -= arr[i];
            else total += arr[i];
        }
        cout << total << endl;
    }
    
    return 0;
}