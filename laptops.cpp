#include <bits/stdc++.h>
using namespace std;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
const ll mod = 1e9 + 7, N = 2e6 + 7, M = 2e6 + 7, INF = INT_MAX / 10;
ll powe(ll x, ll y)
{
    x = x % mod, y = y % (mod - 1);
    ll ans = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            ans = (1ll * x * ans) % mod;
        }
        y >>= 1;
        x = (1ll * x * x) % mod;
    }
    return ans;
}
void solve()
{
}
signed main()
{
    fast;
    int n;
    cin >> n;
    pair<int, int> pr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> pr[i].first >> pr[i].second;
    }

    sort(pr, pr + n);
    for (int j = 0; j < n - 1; j++)
    {
        if (pr[j].first < pr[j + 1].first && pr[j].second > pr[j + 1].second)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    for (int i = 0; i < n ; i++){
        cout << pr[i].first << " " << pr[i].second << endl;
    }
        cout << "Poor Alex" << endl;
    return 0;
}